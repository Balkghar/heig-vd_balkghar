#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(void) {
   size_t i = 1;
   uint32_t j = UINT32_MAX;

   printf("i = %zd\n", i);
   printf("j = %zd\n", j);

   return EXIT_SUCCESS;
}