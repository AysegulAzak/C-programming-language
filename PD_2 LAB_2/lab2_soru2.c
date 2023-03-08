#include <stdio.h>

int dizi_topla(int[], int, int);

int main(){   // 0  1 2 3 4
	int dizi[]={23,11,4,5,8};
	int sonuc=0;
	sonuc=dizi_topla(dizi, 4, sonuc);
	printf("sonuc=%d\n", sonuc);
	return 0;
}
int dizi_topla(int x[], int y, int z){
	if(y<0)
	     return z;
	z+=x[y];  // 8+5+4+11+23
	return dizi_topla(x, y-1, z);     
}

// dizi elemanlarý toplamý recursive fonksiyon 
