#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int satirSayisi, space, k=1, i, j;
	printf("satir sayisi:");
	scanf("%d", &satirSayisi);
	
	for(i=0; i<satirSayisi; i++) 
	{
		for(space=1; space<=satirSayisi-i; space++) {
			printf(" ");
		}
		for(j=0; j<=i; j++) 
		{
			if(j==0 || i==0)
			
				k=1;
			 else
			    k=k*(i-j+1)/j;	
			
			 printf("%4d", k);
		}
		printf("\n");
	}
	return 0;
}
