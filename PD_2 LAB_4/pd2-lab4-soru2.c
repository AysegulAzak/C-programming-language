#include <stdio.h>
#include <stdlib.h>

int main() {
	int ary[4]={1, 2, 3, 4};
	int *p=ary+2;
	printf("%d %d\n", p[-2], ary[*p]);
	printf("%d\n", p[1]);
}
