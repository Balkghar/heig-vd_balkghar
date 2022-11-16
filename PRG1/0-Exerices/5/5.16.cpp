//---------------------------------------------------------
// Fichier      : 5.16.cpp
// Auteur       : Hugo Germano
// Date         : 16.11.2022

// But          : Exercice 5.16
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
using Vecteur = vector<int>;

Vecteur concactVecteur(const Vecteur& tab1, const Vecteur& tab2);
void afficherVecteur(const Vecteur& vect);
int main() {   
   Vecteur tab1 = {1,2,4,5,1,3,5,1};
   Vecteur tab2 = {3,1,4,9,6,23,41,32};


   Vecteur test = concactVecteur(tab1, tab2);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
Vecteur concactVecteur(const Vecteur& tab1, const Vecteur& tab2){
   Vecteur vect = tab1;
   cout << "append(";
   afficherVecteur(tab1);
   cout << ", ";
   afficherVecteur(tab2);
   cout << ") = ";
   for(int i : tab2){
      vect.push_back(i);
   }
   afficherVecteur(vect);
   cout << endl;
   return vect;

}
void afficherVecteur(const Vecteur& vect){
   cout << "[";
   for(int i = 0; i < vect.size(); ++i){
      if ( i ){
         cout << ", ";
      }
      cout << vect.at(i);
   }
   cout << "]";
}