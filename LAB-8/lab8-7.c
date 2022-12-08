#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c, the_largest_number;
	printf("a:");
	scanf("%d", &a);
	
	printf("b:");
	scanf("%d", &b);
	
	printf("c:");
	scanf("%d", &c);
	
	if(a>b)
{
        if(a>c) 
         the_largest_number=a;  
}	
    else
{
	   if(b>c)
         the_largest_number=b;
   	else  
       	 the_largest_number=c;  
}	
  	printf("the_largest_number:%d", the_largest_number);
	return 0;
}
