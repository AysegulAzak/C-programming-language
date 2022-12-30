#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int sum=0, i;
	for(i=100; i<200; i++)
	{
		if(i%9==0) 
		{
			printf("\n%d", i);
			sum=sum+i;
		}
		  else
		  {
		  	i++;
		  }
	}
	printf(" \n sum: %d", sum);

	return 0;
}
