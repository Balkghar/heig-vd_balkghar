//---------------------------------------------------------
// Fichier      : 3.32.cpp
// Auteur       : Hugo Germano
// Date         : 27.10.2022

// But          : Exercice 3.32
//
// Remarque     :
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <cmath>
#include <iomanip>
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define RANDOM rand() / double(RAND_MAX)

using namespace std;
int main() {
   //déclaration des constantes
   const int DECIMALES = 2;

   //déclaration des variables
   int n, m=0;	//n = nombre de flechette / m = nombre de flechette qui ont touché la cible
   double pi;
   double x;
   double y;
   double longueur; //longueur du triangle  x y
   
   do {
      cout << "Rentrez le nombre de fléchète que vous voulez lancer : ";
      cin >> n;
      VIDER_BUFFER;
   }while(n < 1);//demande le nombre de fléchette à l'utilisateur jusqu'il rentre un nombre au dessus de 1

   //simulation du lanché de fléchette
   for(int i = 0; i < n; ++i){
      x = RANDOM;
      y = RANDOM;
      longueur = sqrt(pow(x,2) + pow(y,2));
      if(longueur <= 1){
         ++m;
      }
   }
   //calcul de pi
   pi = 4*(double(m)/n);

   //affichage de pi
   cout << fixed << setprecision(DECIMALES) << "Pi s'approche de " << pi << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}