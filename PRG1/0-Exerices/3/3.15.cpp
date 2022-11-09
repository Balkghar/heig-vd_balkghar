//---------------------------------------------------------
// Fichier      : 3.15.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

// But          : Exercice 3.15
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


   //déclaration des variables
   enum mois{janvier=1,fevrier,mars,avril,mai,juin,juillet,aout,septembre,octobre,novembre, decembre};
   int numberOfTheMonth;


   cout << "Entrez un no de mois (1-12) : ";
   cin >> numberOfTheMonth;

   VIDER_BUFFER;

   cout << "Ce mois comporte ";

   switch ((mois) numberOfTheMonth)
   {
      case mois::janvier:
      case mois::mars:
      case mois::mai:
      case mois::juillet:
      case mois::aout:
      case mois::octobre:
      case mois::decembre:
         cout <<"ce mois comporte 31 jours"<< endl;
         break;
      case mois::fevrier:
         cout <<"ce mois comporte 28 ou 29 jours"<< endl;
         break;
      case mois::avril:
      case mois::juin:
      case mois::septembre:
      case mois::novembre:
         cout << "ce mois comporte 30 jours" <<endl;
         break;
   }
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
