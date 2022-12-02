//---------------------------------------------------------
// Fichier      : 6.1.cpp
// Auteur       : Hugo Germano
// Date         : 01.12.2022

// But          : Exercice 6.1
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

/// @brief contrôle de saisie d'un caractère
/// @param message message de saisie à afficher
/// @param message_erreur message d'erreur si il y en a une
/// @return 
char saisieChar(const string& message, const string& message_erreur){
   char saisie;
   bool erreur;

   do {
      cout << message;
      cin >> saisie;

      erreur = cin.fail() and ( saisie < 0 or saisie > 255 ) ;

      if ( erreur ) {

         cout << message_erreur << endl;
         cin.clear();

      }

      // vider buffer
      VIDER_BUFFER;

   } while(erreur);

   return saisie;
}

int main() {
   
   const char saisie = saisieChar("Veuillez entrer un caractère : ", "Une erreur est arrivée, veuillez retaper un caractère !");

   cout << "\'"<< saisie << "\' est une lettre de l'alphabet : ";
   if(isalpha(saisie)){cout << "vrai" << endl;}else{cout << "faux" << endl;}

   cout << "\'"<< saisie << "\' est une lettre minuscule : ";
   if(islower(saisie)){cout << "vrai" << endl;}else{cout << "faux" << endl;}
   
   cout << "\'"<< saisie << "\' est une chiffre : ";
   if(isdigit(saisie)){cout << "vrai" << endl;}else{cout << "faux" << endl;}

   cout << "\'"<< saisie << "\' est une caractère de ponctuation : ";
   if(ispunct(saisie)){cout << "vrai" << endl;}else{cout << "faux" << endl;}

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}