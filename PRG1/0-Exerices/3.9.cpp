//---------------------------------------------------------
// Fichier      : 3.9.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

// But          : Exercice  3.9
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>
#include <iostream>

/*
Solution https://openclassrooms.com/forum/sujet/vider-le-buffer-de-scanf-90403
*/
void viderBuffer(void){
  int c;
  while((c=getchar()) != EOF && c != '\n');
}
int main() {
   //déclaration des variables
   int premier, second, troisieme;
   int plusPetit;
   char vide;

   printf("Entrez une valeur : ");
   scanf("%d",&premier);
   viderBuffer();
   printf("Entrez une valeur : ");
   scanf("%d",&second);
   viderBuffer();
   printf("Entrez une valeur : ");
   scanf("%d",&troisieme);
   viderBuffer();
   if(premier < second && premier < troisieme){
      plusPetit = premier;
   }
   else if(second < troisieme){
      plusPetit = second;
   }
   else{
      plusPetit = troisieme;
   }


   printf("Le numéro le plus petit est : %d \n", plusPetit);
   printf("Veuillez appuyer sur ENTER pour quitter le logiciel");
   viderBuffer();
   return true;                                  //retourne un code de succès
}