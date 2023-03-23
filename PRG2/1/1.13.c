#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE_NOM 20
int main(void) {

   char nom[TAILLE_NOM];
   printf("Entrez votre nom (%d caract. max) : ", TAILLE_NOM);

   fgets(nom, TAILLE_NOM, stdin);

   nom[strlen(nom)-1]='\0';

   printf("Votre nom est \"%s\"\n", nom);
   getchar();
   return EXIT_SUCCESS;

}