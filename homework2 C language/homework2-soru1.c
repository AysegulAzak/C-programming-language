#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int uzunKenar, kisaKenar, alan, cevre;
	printf("uzunKenar:");
	scanf("%d", &uzunKenar);
	
	printf("kisaKenar:");
	scanf("%d", &kisaKenar);
	
	alan=uzunKenar*kisaKenar;
	cevre=2*(uzunKenar+kisaKenar);
	printf("\n alan %d", alan);
	printf("\n cevre %d", cevre);
	return 0;
}
