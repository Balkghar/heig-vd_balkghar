//---------------------------------------------------------
// Fichier      : 5.14.cpp
// Auteur       : Hugo Germano
// Date         : 12.11.2022

// But          : Exercice 5.14
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
bool valeurEstDansTableau(int tab[], const size_t TAILLE, int element);
bool tableauxSontEgaux(int tab1[], int tab2[], const size_t TAILLE1, const size_t TAILLE2);

int main() {
   const int CAPACITE = 10;
   const int CAPACITE2 = 11;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {1,2,3,4,5,6,7,8,9,10};
   size_t taille2 = CAPACITE2;
   int tab2[CAPACITE2] = {1,2,3,4,5,6,7,8,9,10,11};


   if((tableauxSontEgaux(tab, tab2, taille, taille2) && tableauxSontEgaux(tab2, tab, taille2, taille))){
      cout << "Les tableaux sont égaux !" << endl;
   }
   else{
      cout << "Les tableaux ne sont pas égaux !" << endl;
   }
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;       //retourne un code de succès
}
void afficherTableau(const int tab[], const size_t TAILLE){
   cout << "[";
   for(int i = 0; i< TAILLE; ++i){
      if(i){cout << ",";}
      cout << tab[i];
   }
   cout << "]" << endl;
}
bool tableauxSontEgaux(int tab1[], int tab2[], const size_t TAILLE1, const size_t TAILLE2){
   for(int i = 0; i < TAILLE1; ++i){
      if(valeurEstDansTableau(tab2, TAILLE2, tab1[i]) == false){
         return false;
      }
   }
   return true;
}
bool valeurEstDansTableau(int tab[], const size_t TAILLE, int element){
   for(int i = 0; i < TAILLE; ++i){
      if(tab[i] == element){
         return true;
      }
   }
   return false;
}