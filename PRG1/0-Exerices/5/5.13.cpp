//---------------------------------------------------------
// Fichier      : 5.13.cpp
// Auteur       : Hugo Germano
// Date         : 12.11.2022

// But          : Exercice 5.13
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
void decalerCaseGauche(int tab[], size_t& taille, size_t depart, int decalage);
void supprimerDoublonTableau(int tab[], size_t& taille);
int main() {
   const int CAPACITE = 13;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {9,2,3,2,6,6,6,6,3,8,9,8,11};
   

   cout << "Avant modification : ";
   afficherTableau(tab,taille);

   supprimerDoublonTableau(tab, taille);

   cout << "Après modification : ";
   afficherTableau(tab,taille);


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
void decalerCaseGauche(int tab[], size_t& taille, size_t depart, int decalage){
   for(int i = depart; i < taille-decalage; ++i){
      tab[i] = tab[i+decalage];
   }
   taille -= decalage;
}
void supprimerDoublonTableau(int tab[], size_t& taille){
   for(int i = 0; i < taille; ++i){
      for(int j = i+1; j < taille; ++j){
         if(tab[i] == tab[j]){
            decalerCaseGauche(tab, taille, j, 1);
            --j;
         }
      }
   }
}