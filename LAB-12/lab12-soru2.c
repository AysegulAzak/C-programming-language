#include <stdio.h>
#include <stdlib.h>

int main() 
	int i=0,j=0;
	char str1[]="p2'r-o@gram84iz.";
	char str2[50];
	
	while( str1[i]!= '\0')
	{
		if(str1[i]>=97 && str1[i]<=122 )
		{
			str2[j]=str1[i];
			j++;
    	}
      i++;
	}

	puts(str2);
	return 0;
}
