//---------------------------------------------------------
// Fichier      : 3.19.cpp
// Auteur       : Hugo Germano
// Date         : 20.10.2022

// But          : Exercice 3.19
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
#include <bits/stdc++.h>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
int intlog(double base, double x) {
    return (int)(log(x) / log(base));
}
int main() {

   //déclaration des variables
   double interet;
   int capital;
   double newCapital;
   int i = 0;

   cout << "Veuillez entrer votre capital : ";
   cin >> capital;
   VIDER_BUFFER;
   newCapital = capital;
   cout << "Veuillez entrer votre interet : ";
   cin >> interet;
   VIDER_BUFFER;

   while (newCapital <= (capital*2))
   {
      newCapital = newCapital * interet;
      i++;
   }
   for (i = 0; newCapital <= (capital*2) ; ++i){
      newCapital = newCapital * interet;
   }

   i = intlog(interet,2);


   cout << "Cela a pris " << i <<" année(s) pour doubler votre capital" << endl;
   
   
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
