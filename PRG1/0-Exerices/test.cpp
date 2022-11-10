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

void tri(int tab[], unsigned& taille, unsigned pos){
   if(pos < taille){
      for(unsigned i = pos+1; i < taille; ++i){
         tab[i-1] = tab[i];
      }
      --taille;
   }
}
void afficher(const int tab[], unsigned taille){
   cout << "[";
   for(int i = 0; i < taille; ++i){
      if(i){cout << ",";}
      cout << tab[i];
   }
   cout << "]";
   cout << endl;
}
int main() {
   int tab[5] = {1,2,3,4,5};
   unsigned taille = 5;

   tri(tab, taille, 3);

   afficher(tab, taille);
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}