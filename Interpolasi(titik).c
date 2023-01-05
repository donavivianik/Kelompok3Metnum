//Nugraha Adiputra - 2101891
//Interpolasi Titik

#include <stdio.h>

//Fungsi utama
int main() {
    int inputan; // var inputan
    printf("Jumlah titik : "); 
    scanf("%d", &inputan); 
    float x[inputan];
    float y[inputan];

    int i, j; //variabel perulangan
    //perulangan dengan batasan sesuai inputan
    for ( i = 0; i < inputan; i++) {
        printf("\nx[%d] y[%d] : ", i, i);
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }
    
    // Menyimpan Data ke array
    float L[inputan];
    float Ly = 0;
    float Lx = 0;

    printf("\nTitik interpolasi : ");
    scanf("%f", &Lx);

    // Proses Perulangan Interpolasi
    for ( i = 0; i < Lx; i++) {
        L[i] = 1;
        for ( j = 0; j < Lx; j++) {
            if(i != j) { L[i] *= (Lx - x[j])/(x[i] - x[j]); }
        }
        Ly += L[i] * y[i];
    }
    
    //Cetak Hasil
    printf("\np2(%.5f) : %.5f", Lx, Ly);
    return 0;
}