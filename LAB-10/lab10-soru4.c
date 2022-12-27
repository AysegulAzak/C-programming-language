#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int a[]={1,5,2,4,5,6,78,12,1,3};
	int i, temp;
	
	for(i=0; i<10; i++) {
		printf("a[%d]= %d \n", i,a[i]);
	}
	for(i=0; i<5; i++) {
		temp=a[i];
		a[i]=a[9-i];
		a[9-i]=temp;
	}
	for(i=0; i<10; i++) {
		printf(" a[%d]= %d \n", i, a[i]);
	}
	return 0;
}
