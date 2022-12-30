#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a, b, c;
	printf("a: b: c:");
	scanf("%d %d %d", &a,b,c);
	int d, x1, x2;
	d=b*b-4*a*c;
	
   	if(d>0) {
		x1=(-b+d^(1/2)/2*a);
		x2=(-b-d^(1/2)/2*a);
		printf("%d %d", x1, x2);
    } 
    else(d==0) {
	    x1=-b/2*a;
		x2=-b/2*a;
		printf("%d", x1);
    }
    else {
        printf("%d denklemin gercel koku yoktur.")	
	}

    return 0;	
}
