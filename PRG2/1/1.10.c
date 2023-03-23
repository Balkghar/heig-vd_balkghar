#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int n = 255;
   double x = 12.345;

   printf("%#o\n", n);

   printf("%X\n",n);

   printf("%+07d\n",n); // TODO pas réussi ⚠️

   printf("%.3e\n",x);

   printf("%.3f\n", x);

   printf("%.4f\n", x);


   return EXIT_SUCCESS;
}
// output désiré
//0377
//FF
//+###255
//1.235e+01
//12.345
//12.3450