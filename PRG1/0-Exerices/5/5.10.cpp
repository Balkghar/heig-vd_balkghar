//---------------------------------------------------------
// Fichier      : 5.10.cpp
// Auteur       : Hugo Germano
// Date         : 11.11.2022

// But          : Exercice  5.10
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <iomanip>
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

void afficherTableau(const int tab[], const size_t TAILLE);
bool tableauEstCroissant(const int tab[], const size_t TAILLE);

int main() {

   const int CAPACITE = 11;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {1,2,3,4,5,6,7,8,9,10,11};
   
   cout << "Tableau : ";
   afficherTableau(tab, taille);

   if(tableauEstCroissant(tab, taille)){
      cout << "Tableau strictement croissant" << endl;
   } else {
      cout << "Tableau non strictement croissant" << endl;
   }

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
void afficherTableau(const int tab[], const size_t TAILLE){
   cout << "[";
   for(int i = 0; i< TAILLE; ++i){
      if(i){cout << ",";}
      cout << tab[i];
   }
   cout << "]" << endl;
}
bool tableauEstCroissant(const int tab[], const size_t TAILLE){
   if(TAILLE == 1 || TAILLE == 0){
      return true;
   }
   for(int i = 0; i < TAILLE-1; ++i){
      if(tab[i] > tab[i+1] ){
         return false;
      }
   }
   return true;
}