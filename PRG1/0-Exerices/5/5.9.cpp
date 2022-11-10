//---------------------------------------------------------
// Fichier      : 5.9.cpp
// Auteur       : Hugo Germano
// Date         : 10.11.2022

// But          : Exercice 5.9
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

void afficherTableau(const int tab[], size_t TAILLE);
void supprimerCaseCentre(int tab[], size_t& taille);
void decalerCaseGauche(int tab[], size_t taille, size_t depart, int decalage);

int main() {
   const int CAPACITE = 11;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {1,4,6,3,9,6,3,1,8,6};



   cout << "Avant suppression : ";
   afficherTableau(tab , taille);

   supprimerCaseCentre(tab , taille);

   cout << "Après suppression : ";
   afficherTableau(tab , taille);


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
void supprimerCaseCentre(int tab[], size_t& taille){
   const bool pair = taille % 2 ? false : true ;
   if(pair){
      int depart=  (taille/2)-1;
      decalerCaseGauche(tab,taille,depart,2);
      taille -= 2;
   } else {
      int depart=  (taille/2);
      decalerCaseGauche(tab,taille,depart,1);
      --taille;
   }
}
void decalerCaseGauche(int tab[], size_t taille, size_t depart, int decalage){
   for(int i = depart; i < taille-decalage; ++i){
      tab[i] = tab[i+decalage];
   }
}