//---------------------------------------------------------
// Fichier      : 5.27.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

// But          : Exercice 5.27
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

ostream &operator<<(ostream &os, const vector<string> &input)
{
   for (string i: input) {
      os << i << " ";
   }
   os << endl;
   return os;
}

int main() {

   vector<string> prenom = {"Pierre", "Pierre", "Pierre", "Paul", "Jacques", "Jacques", "Henri", "Pierre", "Paul", "Jacques"};
   
   cout << prenom << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}