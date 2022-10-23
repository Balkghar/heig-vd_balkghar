//---------------------------------------------------------
// Fichier      : 3.26.cpp
// Auteur       : Hugo Germano
// Date         : 23.10.2022

// But          : Exercice 3.26
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
#include <cmath>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
int main() {

   //déclaration des constantes
   const int DECIMALES = 2;
   const string etoile = "*";


   //déclaration des variables
   int hauteurTriangle;
   int compteEtoile = 1;
   string etoiles = "";
   int largeur;


   //fixe l'affichae du nombre après la virgule
   cout << fixed << setprecision(DECIMALES);

   cout << "Veuillez entrer l'hauteur du triangle : ";
   cin >> hauteurTriangle;
   VIDER_BUFFER;

   if(hauteurTriangle <= 0){
      do{
         cout << "Veuillez entrer l'hauteur du triangle, positif cette fois ;) : ";
         cin >> hauteurTriangle;
         VIDER_BUFFER;
      }while(hauteurTriangle <= 0);
   }

   largeur = hauteurTriangle;

   for(int i = 0; i < hauteurTriangle; ++i){
      etoiles = "";
      for(int i = 0; i < compteEtoile; ++i){
         etoiles.append(etoile);
      }

      cout << setw(largeur) << etoiles << endl;
      ++largeur;
      compteEtoile += 2;
   }
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
