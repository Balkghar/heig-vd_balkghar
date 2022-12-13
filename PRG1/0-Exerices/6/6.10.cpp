//---------------------------------------------------------
// Fichier      : 6.10.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

// But          : Exercice 6.10
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

   string prenom;
   string nom;
   string acro;

   cout << "Entrez votre prenom et votre nom : ";

   getline(cin, prenom, ' '); 
   getline(cin, nom);

   cout << "Votre prénom est : " << prenom << endl;
   cout << "Votre nom est : " << nom << endl;

   string a(1, prenom.at(0));
   string b(1, nom.at(0));
   string c(1, toupper(nom.at(nom.size()-1)));

   acro = a + b + c ;

   cout << "Votre acronyme est : " << acro << endl;



   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}