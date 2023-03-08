#include <stdio.h>

int obeb(int x, int y);
int main()
{
   int x, y;
   printf("pozitif iki tam sayi girin: ");
   scanf("%d %d", &x, &y);

   printf("%d ve %d sayisinin OBEB'i %d.", x, y, obeb(x,y));
   return 0;
}

int obeb(int x, int y)
{
    if (y != 0)
       return obeb(y, x%y);
    else 
       return x;
}

// obeb bulma recursive fonksiyon kullanarak
