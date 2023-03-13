#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "limits.h"
#define afficher(fmt, ...) printf("ligne %d : " fmt "\n", __LINE__, __VA_ARGS__)
#define sommer(a, b) ((a + b) < a ? a : ((a) + (b)))

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