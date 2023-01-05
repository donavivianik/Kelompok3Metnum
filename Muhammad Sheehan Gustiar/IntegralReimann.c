#include<stdio.h>
#include<conio.h>
#include<math.h>

#define f(x) 2*x + 3


int main()
{
 float bawah, atas, integrasi=0.0, langkah, k;
 int i, subInterval,x;

 printf("Masukan batas bawah integrasi: ");
 scanf("%f", &bawah);
 printf("Masukan batas atas integrasi: ");
 scanf("%f", &atas);
 printf("Masukan angka nilai sub interval: ");
 scanf("%d", &subInterval);

 langkah = (atas - bawah)/subInterval;
 x =  bawah + langkah / 2;

 integrasi = f(x);
 for(i=1; i<= subInterval-1; i++)
 {
 	x += langkah;
 	integrasi += ((i-1)*f(x));
 }
 integrasi = integrasi * langkah;
 printf("\nHasil nilai integrasi= %.3f", integrasi);
 getch();
 return 0;
}