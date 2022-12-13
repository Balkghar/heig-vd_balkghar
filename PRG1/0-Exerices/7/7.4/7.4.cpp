//---------------------------------------------------------
// Fichier      : 7.4.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

// But          : Exercice 7.4
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
#include "7.4-robot.hpp" 

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int main() {

   Robot r(15);

   cout << "La position du robot est à : " << r.getPosition() << endl;

   r.faireDemiTour();

   r.deplacer(10);

   cout << "La position du robot est à : " << r.getPosition() << endl;


   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}