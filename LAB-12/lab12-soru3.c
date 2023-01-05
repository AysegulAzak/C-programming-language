#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[200];
    int i, vowels=0, consonants=0, digits=0, whiteSpaces=0;
    
    printf("Enter a string:");
    gets(str);
    
    for(i=0; str[i]!='\0'; i++)
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowels++;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            consonants++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else if (str[i]==' ')
        {
            whiteSpaces++;
        }
    print("vowels: %d\n", vowels);
    printf("consonants : %d\n", consonants);
    printf("digits : %d\n", digits);
    printf("white spaces : %d\n", whiteSpaces);
	return 0;
}
   /* write c program to count the number of vowels, consonants... */
