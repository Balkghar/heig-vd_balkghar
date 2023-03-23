#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   char c;

   printf("Donnez un nombre entier et un caractere : ");

   scanf("%d %c", &n, &c);

   printf("n = %d, c = %c\n", n, c);

   return EXIT_SUCCESS;
}