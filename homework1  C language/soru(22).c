#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int first_digit, last_digit, n;
    printf("enter first digit:");
	scanf("%d", &first_digit);
	
	printf("enter last digit:");
	scanf("%d", &last_digit);
     
	first_digit=first_digit+last_digit;
	last_digit=first_digit-last_digit;
    first_digit=first_digit-last_digit;
	
	printf("%d", first_digit);
	printf("%d", last_digit);
	
	return 0;
}
