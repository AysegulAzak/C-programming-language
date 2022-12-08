#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float radius, area, pi=3.14;
    
    printf("radius:");
    scanf("%f", &radius);
    
    area=pi*radius*radius;
    printf("area:%f", area);
    
	return 0;
}
