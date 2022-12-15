#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float radius, area;
	printf("radius:");
	scanf("%f", &radius);
	
	area=3.14*radius*radius;
	printf("area:%f", area);
	return 0;
}
