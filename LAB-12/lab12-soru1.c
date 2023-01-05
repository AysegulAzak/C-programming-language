#include <stdio.h>
#include <stdlib.h>

int main() {
	char str1[6]="Ahmet";
	char str2[4]="Ali";
	char str3[20];
	int i=0, j=0;
	
    printf("\n %s", str1);
	printf("\n %s", str2);

    while(str1[i] !='\0') {
    	str3[j]=str1[i];
    	i++;
    	j++;
	}
	i=0;
	while(str2[i]!='\0'){
	    str3[j]=str2[i];
	    i++;
	    j++;
	}
	str3[j]='\0';
	printf("\n concatenated string: %s", str3);
	
	return 0;
}
//Write C Program to Concatenate Two Strings
