#include <stdio.h>
#include <stdlib.h>

void fonk(void);
int gid=287;

int main(){
	printf("lab1 gid degisken degeri: %d\n", gid);
	fonk(); //
    return 0;
}

extern int gid;
void fonk(void){
	printf("lab1 gid degisken degeri: %d", gid);
}

