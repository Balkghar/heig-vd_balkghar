//---------------------------------------------------------
// Fichier      : 5.18.cpp
// Auteur       : Hugo Germano
// Date         : 22.11.2022

// But          : Exercice 5.18
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
#include <vector>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
using Ligne = vector<bool>;
using Matrice = vector<Ligne>;


void additionDiagonal(const Matrice& matrice){
   int diagonalDroite = 0;
   int diagonalGauche = 0;
   for(int i = 0; i < matrice.size(); ++i){
      diagonalGauche += matrice.at(i).at(i);
   }
   cout << endl << endl;
   for(int i = 2, j = 0 ; i >= 0; --i, ++j){
      diagonalDroite += matrice.at(j).at(i);
   }
   for(int i = 0; i < matrice.size(); ++i){
      for(int j = 0; j < matrice.at(i).size(); ++j){
         cout << matrice.at(i).at(j) << " ";
      }
      cout << endl;
   }
   cout << "Total diagonal gauche : " << diagonalGauche << endl;
   cout << "Total diagonal droite : " << diagonalDroite << endl;
}

int main() {
   Matrice test = {
      {1,0,1},{0,1,0},{1,0,0}
   };
   additionDiagonal(test);
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}