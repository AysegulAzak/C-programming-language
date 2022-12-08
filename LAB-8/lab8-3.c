#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, even, odd;
	print("n:");
	scanf("%d", &n);
  {
  	if(n%2==0) 
  		printf("\n%d even number.", n);
  	else
  	    printf("\n%d odd number.", n);
  }
	return 0;
}
