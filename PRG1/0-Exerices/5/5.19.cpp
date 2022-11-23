//---------------------------------------------------------
// Fichier      : 5.19.cpp
// Auteur       : Hugo Germano
// Date         : 20.11.2022

// But          : Exercice 5.19
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
#include <vector>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;
void initialisationVecteruAlpha(vector<string>& vect){
   string d;
   for(int i = 97; i < 123; ++i){
      d += char(i);
   }
   for(int i = 26; i > 0; --i){
      vect.push_back(d.substr(0,i));
   }
}
void afficherVector(vector<string>& vect){
   for(string i : vect){
      cout << i;
      cout << endl;
   }
}
int main() {
   vector<string> hey;
   initialisationVecteruAlpha(hey);
   afficherVector(hey);
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}