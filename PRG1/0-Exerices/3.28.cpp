//---------------------------------------------------------
// Fichier      : 3.28.cpp
// Auteur       : Hugo Germano
// Date         : 23.10.2022

// But          : Exercice 3.28
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
   //déclaration des constantes
   const int DECIMALES = 2;
   //déclaration des variables
   int n;
   double reponse = 1;

   do{
      cout << "Veuillez entrer n : ";
      cin >> n;
      VIDER_BUFFER;
   }while(n < 0);
   for (int i = 2; i <= n; ++i){
      reponse = reponse + 1.0/i;
   }
   cout << fixed << setprecision(DECIMALES) << "La somme des " << n << " premiers termes de la serie harmonique vaut " << reponse << endl;
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
