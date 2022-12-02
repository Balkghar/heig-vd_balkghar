//---------------------------------------------------------
// Fichier      : example.cpp
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

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int main() {


   const string dansTaGueuleNico =
     string(3,' ') + string(1,'*')+string(1, '\n')
   + string(2,' ') + string(3,'*') + string(1, '\n')
   + string(1,' ') + string(5,'*') + string(1, '\n')
   + string(7,'*') + string(1, '\n')
   + string(1,' ') + string(5,'*') + string(1, '\n')
   + string(2,' ') + string(3,'*') + string(1, '\n')
   + string(3,' ') + string(1,'*') + string(1, '\n');

   cout << dansTaGueuleNico;
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}