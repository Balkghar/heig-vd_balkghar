//---------------------------------------------------------
// Fichier      : 3.13.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

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


   //déclaration des variables
   enum mois{janvier=31,fevrier=28,mars=31,avril=30,mai=31,juin=30,juillet=31,aout=31,septembre=30,octobre=31,novembre=30, decembre=31};
   int numberOfTheMonth;


   cout << "Entrez un no de mois (1-12) : ";
   cin >> numberOfTheMonth;

   VIDER_BUFFER;

   cout << "Ce mois comporte ";

   switch (numberOfTheMonth)
   {
   case 1:
      cout << janvier;
      break;
   case 2:
      cout << fevrier << " ou " << fevrier+1;
      break;
   case 3:
      cout << mars;
      break;
   case 4:
      cout << avril;
      break;
   case 5:
      cout << mai;
      break;
   case 6:
      cout << juin;
      break;
   case 7:
      cout << juillet;
      break;
   case 8:
      cout << aout;
      break;
   case 9:
      cout << septembre;
      break;
   case 10:
      cout << octobre;
      break;
   case 11:
      cout << novembre;
      break;
   case 12:
      cout << decembre;
      break;
   }
   cout << " jours" << endl;
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
