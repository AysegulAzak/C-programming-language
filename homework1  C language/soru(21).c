#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, first_digit, last_digit;
	printf("n:");
	scanf("%d", &n);
	
	last_digit=n%10;
	printf("last digit:%d\n", last_digit);

	if(n>=10) {
		n=n/10;
    }
    first_digit=n;
	printf("first digit: %d\n", first_digit);
	
	return 0;
}
