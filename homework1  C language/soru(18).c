#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	printf("n:");
	scanf("%d", &n);
	
	int i=0, binaryNum[i];
	while(n>0){
		binaryNum[i]=n%2;
		n=n/2;
		i++;
	}
	int j;
	for(j=i-1; j>=0; j--){
		printf("%d", binaryNum[j]);
	}
	return 0;
}
