//---------------------------------------------------------
// Fichier      : 6.7.cpp
// Auteur       : Hugo Germano
// Date         : 01.12.2022

// But          : Exercice 6.7
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

int main() {
   string lol = "Nico a un magnifique crâne luisant !";
   
   cout << "Entrez ENTER pour quitter.";
   
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}