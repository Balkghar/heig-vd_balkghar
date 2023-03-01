#include <stdio.h>
#include <stdlib.h>
#define ABS(type) \
type abs_##type(type x){\
   return (((x) > 0) ? (x) : (-x));\
}
ABS(int)
int main(void) {
   int n;
   printf("1. %d\n", abs_int(2));
   printf("2. %d\n", abs_int(-2));
   printf("3. %d\n", abs_int('A'));
   n = -2;
   printf("4. %d\n", abs_int(n+1));
   n = -2;
   printf("5. %d", abs_int(n++)); printf(" %d\n", n);
   n = -2;
   printf("6. %d", abs_int(++n)); printf(" %d\n", n);
   n = -2;
   printf("7. %d", abs(++n)); printf(" %d\n", n);
   return EXIT_SUCCESS;
}