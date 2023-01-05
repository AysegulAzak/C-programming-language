#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int i, j;
	char str[10][50], temp[50];
	
	printf("\n enter 10 words: \n");
	
	for(i=0; i<10; ++i)
	    scanf("%s [^\n]", str[i]);
	    
	for(i=0; i<9; ++i) 
	    for(j=i+1; j<10; ++j)
		{
			if(strcmp(str[i], str[j])>0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		   }   
    printf("lexicographical order: \n");
	for(i=0; i<10; ++i)
	{
		puts(str[i]);
    }		   
	return 0;
}

//Write C Program to Sort Strings in Dictionary Order
