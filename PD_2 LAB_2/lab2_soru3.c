#include <stdio.h>
#include <stdlib.h>

int MaxRec(int dizi[],int max, int n)
{
 if(n<0) return max;
 if (dizi[n]>max) max=dizi[n];
 return MaxRec(dizi,max,n-1);
}

int main()
{
int dizi[5]={25,4,21,154,76};
int n=5;
printf("max:%d",MaxRec(dizi,0,n-1));
}

//Bir dizinin en büyük elemanýný bulan recursive fonksiyonu 

