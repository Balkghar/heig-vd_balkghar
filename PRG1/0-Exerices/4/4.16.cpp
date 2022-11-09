//---------------------------------------------------------
// Fichier      : 4.16.cpp
// Auteur       : Hugo Germano
// Date         : 09.11.2022

// But          : Exercice 4.16
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

void syracuse(int n){
   int i = 0;
   int tmp = n;
   while(n != 1){
      if(n % 2 == 0){
         n = n /2;  
      }
      else{
         n = (3*n) +1;
      }
      i++;
   }

   cout << endl;
   cout << "Il a fallu " << i << " itération(s) pour arriver à 1 depuis " << tmp << endl;
}
void multipleSyracuse(int d){
   for(int i = 1; i <= d; ++i){
      syracuse(i);
   }
}
int saisie(int maxInt, int minInt, const string& message){
   int saisie;
   do{
         cout << message;
         cin  >>  saisie;
         VIDER_BUFFER;

   }while(saisie < minInt or saisie > maxInt);
   return saisie;
}

int main() {
   int n;

   n = saisie(10000, 1 , "Veuillez entrer n : ");

   multipleSyracuse(n);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}