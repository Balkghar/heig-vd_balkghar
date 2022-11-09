//---------------------------------------------------------
// Fichier      : 3.20.cpp
// Auteur       : Hugo Germano
// Date         : 20.10.2022

// But          : Exercice 3.20
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
#include <algorithm>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;

int generator()
{
    static int val = 0;
    return ++val;
}
int main() {

   const int tab_size = 20;
   int tab[tab_size];
   int d = 2;
   
   for(int i = 20, j = 0; i > 0; j++,i--){
    if((j +1)% 3 == 0){
        cout << setw(d) << i <<endl;
        d = 2;
    }
    else{
         cout << setw(d) << i;
         d +=2;
    }
   }

    d = 2;
   cout << endl << endl;

   int i = 20, j = 0;
   while(i > 0){
    if((j +1)% 3 == 0){
        cout << setw(d) << i <<endl;
        d = 2;
    }
    else{
         cout << setw(d) << i;
         d +=2;
    }
    i--;
    j++;
   }

   cout << endl << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
