#include <stdio.h>
#include <stdlib.h>
#define TAILLE_NOM 20
int main(void) {

   char nom[TAILLE_NOM + 1];
   printf("Entrez votre nom (%d caract. max) : ", TAILLE_NOM);
   
   scanf("%20s", nom);
   printf("Votre nom est \"%s\"\n", nom);
   getchar();
   return EXIT_SUCCESS;

}