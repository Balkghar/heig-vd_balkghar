//---------------------------------------------------------
// Fichier      : 5.21.cpp
// Auteur       : Hugo Germano
// Date         : 22.11.2022

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
#include <array>
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

typedef array<int, 3> Myarray;

void afficherArray(Myarray& arr){
   for(int i = 0; i < arr.size(); ++i){
      cout << arr.at(i) << " ";
   }
   cout << endl;
   cout << arr.front() << endl;
   cout << arr.back() << endl;
   arr.fill(0);
   for(int i = 0; i < arr.size(); ++i){
      cout << arr.at(i) << " ";
   }
   cout << endl;
}
int main() {
   Myarray tabInt = {1,2,3};
   
   afficherArray(tabInt);
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}