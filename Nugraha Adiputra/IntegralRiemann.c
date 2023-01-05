//Nugraha Adiputra - 2101891
//Integral Reimann

#include<stdio.h>
#include<conio.h>
#include<math.h>

// Mendefinisikan Fungsi
#define f(x) 2*x + 3


int main()
{
 float bawah, atas, integrasi=0.0, langkah, k;
 int i, subInterval,x;

 // Inputan User
 printf("Masukan batasan bawah integrasi: ");
 scanf("%f", &bawah);
 printf("Masukan batasan atas integrasi: ");
 scanf("%f", &atas);
 printf("Masukan angka nilai sub interval: ");
 scanf("%d", &subInterval);

//mencari langkah yang perlu dilakukan
 langkah = (atas - bawah)/subInterval;
 x =  bawah + langkah / 2;

//mencari nilai integrasi
 integrasi = f(x);
 for(i=1; i<= subInterval-1; i++)
 {
 	x += langkah;
 	integrasi += ((i-1)*f(x));
 }
 integrasi = integrasi * langkah;
 //print hasil
 printf("\nNilai dari integrasi adalah: %.3f", integrasi);
 getch();
 return 0;
}