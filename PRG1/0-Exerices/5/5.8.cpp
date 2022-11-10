//---------------------------------------------------------
// Fichier      : 5.8.cpp
// Auteur       : Hugo Germano
// Date         : 10.11.2022

// But          : Exercice 
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

void decalerUneCaseDroite(int tab[], size_t TAILLE);
void afficherTableau(const int tab[], size_t TAILLE);

int main() {
   const int TAILLE = 10;

   int tab[] = {1,2,3,4,5,6,7,8,9,10};
   cout << "Avant décalage : ";
   afficherTableau(tab, TAILLE);
   decalerUneCaseDroite(tab,TAILLE);
   cout << "Après décalage : ";
   afficherTableau(tab, TAILLE);


   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
void afficherTableau(const int tab[], size_t TAILLE){
   cout << "[";
   for(int i = 0; i< TAILLE; ++i){
      if(i){cout << ",";}
      cout << tab[i];
   }
   cout << "]" << endl;
}
void decalerUneCaseDroite(int tab[], size_t TAILLE){
   int tmp = tab[TAILLE-1];
   int tmp2;
   for(int i = TAILLE-1; i > 0; --i){
      tab[i] = tab[i-1];
   }
   tab[0] = tmp;
}
