#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
   int i, sayi, n, count;
   
   printf("n:");
   scanf("%d", &n);
   printf("prime numbers in between 1 to %d:",n);
   
   for(sayi=1; sayi<=n; sayi++)
   {
      count = 0;
      for(i=2; i<=sayi/2; i++)
	  {
         if(sayi%i==0)
		 {
            count++;
            break;
         }
      }
   if(count==0 && sayi!= 1)
      printf("%d ",sayi);
   }
	return 0;
}
