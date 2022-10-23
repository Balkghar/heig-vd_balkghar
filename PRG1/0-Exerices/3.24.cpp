//---------------------------------------------------------
// Fichier      : 3.24.cpp
// Auteur       : Hugo Germano
// Date         : 21.10.2022

// But          : Exercice 3.14
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
#include <cmath>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
int main() {
   //déclaration des constants
   const double g = 9.81;

   //déclaration des variables
   double e;      //coefficient de rebon
   double h;      // hauteur ou la balle est lachée
   int n;      //nombre de rebond
   double nouvelleH;   //nouvelle hauteur de la balle
   double vitesseBalle;

   cout << fixed << setprecision(2);


   do{
      cout << "Veuillez entrer le coefficient de rebond : ";
      cin >> e;
      VIDER_BUFFER;
   } while(e <= 0 || e > 1);

   do{
      cout << "Veuillez entrer l'hauteur à laquel la balle est lachée : ";
      cin >> h;
      VIDER_BUFFER;
   }while(h <= 0);

   do{
      cout << "Veuillez entrer le nombre de rebond(s) : ";
      cin >> n;
      VIDER_BUFFER;
   }while(n <= 0);
   
   nouvelleH = h;
   for(int i = 0; i < n; ++i){
      vitesseBalle = sqrt(2 * g * nouvelleH);
      vitesseBalle = e * vitesseBalle;
      nouvelleH = pow(vitesseBalle,2) /(2 * g);

      cout << "Au " << i+1 << " rebond(s) la balle est à " << nouvelleH << " du sol" << endl;
   }


   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
