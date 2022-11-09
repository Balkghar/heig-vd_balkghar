//---------------------------------------------------------
// Fichier      : example.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

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
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

int main() {
   //1
   int tab1[5];
   int size1 = sizeof tab1/sizeof tab1[0];
   int tab2[] = {0,1,2,3,4};
   int size2 = sizeof tab2/sizeof tab2[0];
   int tab3[5] = {0,1,2,3,4};
   int size3 = sizeof tab3/sizeof tab3[0];

   //2
   int tab4[5] = {1,2,3,4,5};
   int size4 = sizeof tab4/sizeof tab4[0];
   int tab5[5];
   int size5 = sizeof tab5/sizeof tab5[0];
   for(int i = 0; i < size5; ++i){
      tab5[i] = i+1;
   }

   //3
   bool tab6[5] = {1};
   int size6 = sizeof tab6/sizeof tab6[0];
   for(int i = 0; i < size6; ++i){
      cout << tab6[i] << " ";
   }


   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}