//---------------------------------------------------------
// Fichier      : example.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

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

void afficher(const int tab[], size_t TAILLE){
   cout << "[";
   for(int i = 0; i< TAILLE; ++i){
      if(i){cout << ", ";}
      cout << tab[i];
   }
   cout << "]" << endl;
}
void echanger(int& premier, int& dernier){
   int tmp = premier;
   premier = dernier;
   dernier = tmp;
}
int main() {
   
   int tab[] = {0,1,2,3,4,5,6,7,8,9};
   const size_t TAILLE = sizeof(tab) / sizeof(tab[0]);

   afficher(tab, TAILLE);
   echanger(tab[0], tab[TAILLE-1]);
   afficher(tab, TAILLE);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}