//---------------------------------------------------------
// Fichier      : 5.25.cpp
// Auteur       : Hugo Germano
// Date         : 29.11.2022

// But          : Exercice 5.25
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
#include <algorithm>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

/// @brief supression des doublons
/// @param v1 vecteur dont ils faut ELIMINER les doublons
void elimination(vector<int>& v1){
   for(vector<int>::iterator i = v1.begin(); i != v1.end(); ++i){
      auto it = remove(i+1, v1.end(), *i);
      v1.erase(it, v1.end());
   }

}

/// @brief vérifie si deux vecteurs sont égaux
/// @param v1 le premier vecteur
/// @param v2 le second vecteur
/// @return si les vecteurs sont égaux
bool estEgal(vector<int>& v1, vector<int>& v2){

   elimination(v1);
   elimination(v2);

   sort(v1.begin(), v1.end());
   sort(v2.begin(), v2.end());

   return equal(v1.begin(), v1.end(), v2.begin()) && equal(v2.begin(), v2.end(), v1.begin());
}
/// @brief affiche un vecteur
/// @param vect le vecteur à afficher
void afficherVecteur(const vector<int> vect){
   for(int i : vect){
      cout << i << " ";
   }
   cout << endl;
}
int main() {
   vector<int> v1{1,1,1,2,3,3};
   vector<int> v2{1, 2, 3};

   cout << "Vecteur 1 : ";
   afficherVecteur(v1);
   cout << "Vecteur 2 : ";
   afficherVecteur(v2);

   if(estEgal(v1,v2)){
      cout << "Les vecteurs sont égaux !" << endl;
   }else{
      cout << "Les vecteurs ne sont pas égaux !" << endl;
   }
   cout << "Après changement : " << endl;
   cout << "Vecteur 1 : ";
   afficherVecteur(v1);
   cout << "Vecteur 2 : ";
   afficherVecteur(v2);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}