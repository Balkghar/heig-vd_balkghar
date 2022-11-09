//---------------------------------------------------------
// Fichier      : 4.13.cpp
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

int a = 0;

using namespace std;
#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
void afficher(){
   cout << "Appel numéro " << ++a << endl;
}
int main() {

   afficher();
   afficher();
   afficher();
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}