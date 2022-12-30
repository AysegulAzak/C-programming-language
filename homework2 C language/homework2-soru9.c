#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, temp, sum=0;
	
	printf("n:");
	scanf("%d", &n);
	
	temp=n;
	while(n>0) {
		i=n%10;
		sum=sum+(i*i*i);
		n=n/10;
	}
	if(temp==sum) 
		printf("armstrong sayi");
    else
	    printf("armstrong sayi degil");
	return 0;
}
