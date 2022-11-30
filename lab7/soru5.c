#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	int money, o, e, y, piece, new_money; 
	printf("money:");
	scanf("%d", &money);
	
	(money%10!=0);
	
	e=money/50;
	y=((money-(50*e))/20);
	o=((money-(50*e+20*y))/10);
	
	printf("\n new_money, \n%d piece 10, \n%d piece 20, \n%d piece 50 money,", o, y, e);
	
	
	return 0;
}
