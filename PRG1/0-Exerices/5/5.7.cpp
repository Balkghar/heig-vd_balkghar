//---------------------------------------------------------
// Fichier      : 5.7.cpp
// Auteur       : Hugo Germano
// Date         : 10.11.2022

// But          : Exercice 5.7
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
void remplacerNombrePair(int tab[], size_t taille, int nouvelleValeur);

int main() {
   const int CAPACITE = 10;
   
   size_t taille = CAPACITE;
   int tab[CAPACITE] = {1,4,6,3,9,6,3,1,8,6};
   int nouvelleValeur = 100;

   cout << "Avant remplacement : ";
   afficherTableau(tab, taille);
   remplacerNombrePair(tab,taille, nouvelleValeur);
   cout << "Après remplacement : ";
   afficherTableau(tab, taille);
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;
}

// nom         afficherTableau
// but         Affiche un tableau
//             
// param       tab[]          le tableau à afficher
// param       TAILLE         la taille du tableau
// exception   n/a
void afficherTableau(const int tab[], const size_t TAILLE){
   cout << "[";
   for(int i = 0; i< TAILLE; ++i){
      if(i){cout << ",";}
      cout << tab[i];
   }
   cout << "]" << endl;
}
// nom         remplacerNombrePair
// but         remplace tous les nombre pairr d'un tableau avec une valeur donnée
//             
// param       tab[]          le tableau à modifier
// param       taille         la taille du tableau
// param       nouvelleValeur la valeur qui va remplacer toutes les nombres pairs
// exception   n/a
void remplacerNombrePair(int tab[], const size_t TAILLE, int nouvelleValeur){
   for(int i = 0; i < TAILLE; ++i){
      if(tab[i]%2 == 0){
         tab[i]= nouvelleValeur;
      }
   }
}
