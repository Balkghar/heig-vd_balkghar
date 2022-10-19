//---------------------------------------------------------
// Fichier      : 3.8.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

// But          : Exercice  3.8
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
int main() {
   //déclaration des variables
   int numberOfTheMonth;
   
   cout << "Entrez un no de mois (1-12) : ";
   cin >> numberOfTheMonth;
   VIDER_BUFFER;
   (numberOfTheMonth==1 || numberOfTheMonth==3 || numberOfTheMonth==5 || numberOfTheMonth==7 || numberOfTheMonth==8 || numberOfTheMonth==10 || numberOfTheMonth==12) ? (cout << "Ce mois comporte 31 jours") 
      : (numberOfTheMonth==2) ? cout << "Ce mois comporte 28 ou 29 jours"
         : (cout << "Ce mois comporte 30 jours");

   //cout << "Ce mois comporte " << jourParMois[numberOfTheMonth-1] << " jours." << endl;
   cout << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
