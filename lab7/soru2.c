#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A,B;
	printf("enter A number:");
	scanf("%d", &A);
	
	printf("enter B number:");
	scanf("%d", &B);
	
	A=A+B;
	B=A-B;
	A=A-B;
	
	printf("%d\n", A);
	printf("%d\n", B);
	
	return 0;
}
