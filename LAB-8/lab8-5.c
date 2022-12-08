#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float celcius, derece;
	 printf("derece:");
	 scanf("%f", &derece);
	 
	 celcius=((derece-32)*5/9);
	 printf("celcius:%f", celcius);
	return 0;
}
