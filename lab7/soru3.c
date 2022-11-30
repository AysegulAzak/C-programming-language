#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float student_ID, visa, final;
	printf("visa:");
	scanf("%f", &visa);
	
	printf("final:");
	scanf("%f", &final);
	
	student_ID=visa*0.4+final*0.6;
	
	printf("student ID:%f", student_ID);
	
	return 0;
}
