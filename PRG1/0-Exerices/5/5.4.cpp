//---------------------------------------------------------
// Fichier      : 5.4.cpp
// Auteur       : Hugo Germano
// Date         : 09.11.2022

// But          : Exercice 5.4
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
void affichage(int tab[], int size){
   cout << "[";
   for(int i = 0; i < size; ++i){
      if(i){ cout << ",";}
      cout << tab[i];
   }
   cout << "]";
   cout << endl;
}
int main() {
   int tab1[] = {};
   int size1 = sizeof tab1/sizeof tab1[0];
   int tab2[] = {1};
   int size2 = sizeof tab2/sizeof tab2[0];
   int tab3[] = {1,2};
   int size3 = sizeof tab3/sizeof tab3[0];

   cout << "1 : ";
   affichage(tab1, size1);
   cout << "2 : ";
   affichage(tab2, size2);
   cout << "3 : ";
   affichage(tab3, size3);
   cout << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}