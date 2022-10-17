//---------------------------------------------------------
// Fichier      : 3.11.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

// But          : Exercice 3.11
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
   int entreeUtilisateur;

   cout << "Veuillez entrer un nombre telle que n >= 0 : ";
   cin >> entreeUtilisateur;
   VIDER_BUFFER;
   if (entreeUtilisateur % 5 == 0 && entreeUtilisateur % 3 == 0){
      cout << "N est un multiple de 5 et de 3" << endl;
   }
   else if (entreeUtilisateur % 3 == 0){
      cout << "N est un multiple de 3" << endl;
   }
   else if (entreeUtilisateur % 5 == 0){
      cout << "N est un multiple de 5" << endl;
   }
   else{
      cout << "N est pas un multiple de 5 ou de 3" << endl;
   }


   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
