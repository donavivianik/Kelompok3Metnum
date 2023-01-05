//Nugraha Adiputra - 2101891
//Gauss Jordan

#include <stdio.h>
#define size 6

// VARIABEL GLOBAL
int i, j, k;

// PROSEDUR ELIMINASI GAUSS JORDAN
void gaussJordan(double array[size][size], int ordo){
    double pembagi, v[size];

    printf("\t[Matriks A | B]\n");
    printMatrix(array, ordo);

    // melakukan perulangan seluruh matriks
    for(i = 0; i < ordo; i++){
        pembagi = array[i][i];

        // melakukan perulangan tiap-tiap baris pada matriks
        for(k = i; k < ordo + 1; k++){
            array[i][k] /= pembagi;
        }

        // melakukan perulangan tiap-tiap kolom pada matriks
        // melakukan cek secara vertikal agar arrayay selain x[i][i] bernilai 0
        for(j = i + 1; j < ordo + 1; j++){
            v[i] = array[j][i];

            // melakukan perulangan tiap-tiap baris pada matriks kolom yang sama
            for(k = i; k < ordo + 1; k++){
                array[j][k] = array[j][k] - v[i] * array[i][k];
            }
        }
    }

    for(i = 1; i < ordo; i++){
        for(j = 1; j < i + 1; j++){
            v[j] = array[j - 1][i];
            for(k = i; k < ordo + 1; k++){
                array[j - 1][k] -= v[j] * array[i][k];
            }
        }
    }

    printf("\n\t[Matriks Identitas]\n");
    printMatrix(array, ordo);
}

// Print
void printMatrix(double array[size][size], int ordo){
    for (i = 0; i < ordo; i++){
        printf("|");
        for (j = 0; j < ordo; j++){
            printf("%.3f   ", array[i][j]);

            // menuliskan vektor matriks B
            if (j == ordo - 1){
                printf("\t|   %.3lf", array[i][j + 1]);
            }
        }
        printf("|\n");
    }
}


// Main Program
int main(){
    // Definisi tipe data
    double array[size][size];
    int ordo;


    printf("\n\nSOLUSI PERSAMAAN SISTEM LINEAR METODE GAUSS JORDAN\n");
    printf("\nPress any key to continue.\n");
    getchar();

    printf("\nMasukkan Ordo Matriks : ");
    scanf("%d", &ordo);

    // syarat inputan
    if(ordo < 2){
        printf("\nBentuk Matriks Minimal 2x2!");
        return 0; // program akan terhenti
    }

    printf("\n[ Terkonfirmasi Matriks Ordo %dx%d ]\n\n", ordo, ordo);

    // Input User
    // Melakukan Perulangan Tiap Baris Matriks
    for(i = 0; i < ordo; i++) {
        printf("Input Matriks Baris ke-%d\n", (i + 1));

        // Melakukan input tiap item kedalam matriks
        printf("Matriks A\n");
        for(j = 0; j < ordo; j++){
            printf("[%d][%d] = ", (i+1), (j+1));
            scanf("%lf", &array[i][j]);

            // Menyimpan vektor B ke dalam arrayay dimensi kedua indeks terakhir
            // jika telah sampai pada ujung baris (ordo - 1), input vektor B ke arrayay array[i][j+1]
            if(j == ordo - 1){
                printf("Matriks B\n");
                printf("[%d][%d] = ", (i+1), (j+1));
                scanf("%lf", &array[i][j + 1]);
            }
        }
        printf("\n");
    }

    // Operasi Gauss Jordan
    gaussJordan(array, ordo);

    // menampilkan hasil nilai x1, x2, x3
    for(i = 0; i < ordo; i++){
        printf("\nX%d = %.3lf", (i + 1), array[i][ordo]);
    }
    
    return 0;
}