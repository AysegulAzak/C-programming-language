#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double number, sum=0, i;
	
	printf("number:");
	scanf("%lf", &number);
	for(i=2; i<=number; i+=2)
    {
	sum=sum+(1/i);
	if(i==2)
	   printf("\n 2 +");
    else if(i==number)
       printf("(1/ %lf)", i);
    else
	   printf("(1/ %lf) +", i);   
	}	
	printf("\n The sum of the given series is %.2lf", sum);
	
	return 0;
}
