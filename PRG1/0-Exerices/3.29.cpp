//---------------------------------------------------------
// Fichier      : 3.29.cpp
// Auteur       : Hugo Germano
// Date         : 23.10.2022

// But          : Exercice 3.29
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
   int m;
   int i;

   cout << fixed << setprecision(DECIMALES);

   do{
      cout << "Veuillez entrer deux chiffres, séparé par un espace : ";
      cin >>n;
      cin >>m;
      VIDER_BUFFER;
   }while(n < 0 && m < 0);
   
   if(n < m){i = m;}else{i = n;}

   while(i%n!=0 || i%m!=0){
      i++;
   }
   
   cout << "Le plus petit multiple commun de "<< n << " et "<< m <<" est " << i << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
