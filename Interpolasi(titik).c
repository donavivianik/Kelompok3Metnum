//Nugraha Adiputra - Codingan Interpolasi Titik

#include <stdio.h>

int main() {
	
	//meminta inputanan user
    int inputan;
    printf("Jumlah titik : ");
    scanf("%d", &inputan);
    float x[inputan];
    float y[inputan];


	//memasukan inputanan sebagai batasan
    int i, j;
    for ( i = 0; i < inputan; i++) {
        printf("\nx[%d] y[%d] : ", i, i);
        scanf("%f", &x[i]);
        scanf("%f", &y[i]);
    }
    
    float L[inputan];
    float Ly = 0;
    float Lx = 0;
	
	//meminta masukan titik
    printf("\nTitik interpolasi : ");
    scanf("%f", &Lx);

    //perulangan
    for ( i = 0; i < Lx; i++) {
        L[i] = 1;
        for ( j = 0; j < Lx; j++) {
            if(i != j) { L[i] *= (Lx - x[j])/(x[i] - x[j]); }
        }
        Ly += L[i] * y[i];
    }
    
    //print hasil
    printf("\np2(%.4f) : %.4f", Lx, Ly);
    return 0;
}