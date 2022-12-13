//---------------------------------------------------------
// Fichier      : 7.1.cpp
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
#include "7.1-point.hpp"


#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;

int main() {

   Point p(2.3,2.4);

   cout << "Coordonées du point : (" << p.abscisse() << "," << p.ordonnee() << ")" << endl;

   p.deplacementPoint(1.0, 2.0);


   cout << "Coordonées du point : (" << p.abscisse() << "," << p.ordonnee() << ")" << endl;


   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}