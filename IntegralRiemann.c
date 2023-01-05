//Nugraha Adiputra - Codingan Integral Reimann

#include<stdio.h>
#include<conio.h>
#include<math.h>

//mendefinisikan fungsi
#define f(x) 2*x + 5

int main()
{
 float batasanBawah, batasanAtas, integrasi=0.0, langkah, k;
 int i, subInterval,x;
 
 //JUDUL
 printf("==PROGRAM INTEGRAL RIEMANN== \n \n");
 

 //Meminta masukan user
 printf("Masukan batasan bawah pada integrasi: ");
 scanf("%f", &batasanBawah);
 printf("Masukan batasan atas pada integrasi: ");
 scanf("%f", &batasanAtas);
 printf("Masukan angka dari sub interval: ");
 scanf("%d", &subInterval);

//Proses Menghitung
 //Menemukan langkah
 langkah = (batasanAtas - batasanBawah)/subInterval;
 x =  batasanBawah + langkah / 2;
 /* Finding integrasi Value */
 integrasi = f(x);
 for(i=1; i<= subInterval-1; i++)
 {
 	x += langkah;
 	integrasi += ((i-1)*f(x));
 }
 integrasi = integrasi * langkah;
 printf("\nNilai integrasi adalah: %.5f", integrasi);
 getch();
 return 0;
}