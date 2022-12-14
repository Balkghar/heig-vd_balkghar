//---------------------------------------------------------
// Fichier      : 5.12.cpp
// Auteur       : Hugo Germano
// Date         : 11.11.2022

// But          : Exercice 5.12
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

void supprimerValeurDansTableau(int tab[], size_t& taille, int elementASupprimer);
void afficherTableau(const int tab[], const size_t TAILLE);
void decalerCaseGauche(int tab[], size_t& taille, size_t depart, int decalage);
int main() {
   const int CAPACITE = 11;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {1,2,3,4,3,6,3,8,9,3,11};

   cout << "Avant suppression  : ";
   afficherTableau(tab,taille);
   supprimerValeurDansTableau(tab,taille, 3);


   cout << "Après suppressions : ";
   afficherTableau(tab,taille);
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
void supprimerValeurDansTableau(int tab[], size_t& taille, int elementASupprimer){
   for (int i = 0; i < taille; i++){
      if(tab[i] == elementASupprimer){
         decalerCaseGauche(tab, taille, i, 1);
      }
   }
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