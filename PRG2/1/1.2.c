#include <stdio.h>
#include <stdlib.h>
#define A 2
#define B A+1
#define PLUS(X,Y) X+Y
#define MOINS(X,Y) (X)-(Y)

int main(void) {
   printf("%d %d\n", 5*(PLUS(A,B)), MOINS(A+1,B+1));
   return EXIT_SUCCESS;
}