#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "limits.h"
#define afficher(fmt, ...) printf("ligne %d : " fmt "\n", __LINE__, __VA_ARGS__)
#define sommer(x, y) \
_Generic((x) + (y), int: sommer_int, long long: sommer_long_long)((x), (y))
int sommer_int(int a, int b) {
   if (b < 0 && a < INT_MIN - b) // if underflow
   return INT_MIN;
   else if (b >= 0 && a > INT_MAX - b) // if overflow
   return INT_MAX;
   else
   return a + b;
}
long long sommer_long_long(long long a, long long b) {
   if (b < 0 && a < LLONG_MIN - b) // if underflow
   return LLONG_MIN;
   else if (b >= 0 && a > LLONG_MAX - b) // if overflow
   return LLONG_MAX;
   else
   return a + b;
}
int main(void)
{

   afficher("%d", sommer(1, 2));
   afficher("%d", sommer(INT_MIN, -1));
   afficher("%d", sommer(INT_MAX, 1));

   afficher("%lld", sommer(3LL, 4LL));
   afficher("%lld", sommer(LLONG_MIN, -1));
   afficher("%lld", sommer(LLONG_MAX, 1));

   const bool INCLURE_CAS_SPECIAL = true;

   if (INCLURE_CAS_SPECIAL)
      afficher("%lld - %lld", sommer(INT_MIN, -1LL), sommer(INT_MAX, 1LL));
   else
      afficher("%s", "Calcul spécial pas inclus.");

   return EXIT_SUCCESS;
}