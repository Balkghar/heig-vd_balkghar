//---------------------------------------------------------
// Fichier      : 5.26.cpp
// Auteur       : Hugo Germano
// Date         : dd.MM.yyyy

// But          : Exercice 5.26
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
#include <numeric>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

#include <iterator>

ostream &operator<<(ostream &os, const vector<int> &input)
{
   for (int i: input) {
      os << i << " ";
   }
   os << endl;
   return os;
}
bool estImpair(int i) {return i % 2;}
int main() {
   vector<int> v = {3, 2, -5, 2, 4};

   vector<int> vEmpty(v.size());

   int vTest[v.size()];

   copy(v.begin(),v.end(), vEmpty.begin());

   cout << "Le vecteur v inital :" << endl;

   cout << v;
   cout << "La plus petite valeur de v : ";
   cout << *min_element(v.begin(), v.end()) << endl;

   cout << "La plus grande valeur de v : ";
   cout << *max_element(v.begin(), v.end()) << endl;

   cout << "La somme des élèments de v : ";
   cout << accumulate(v.begin(), v.end(),0) << endl;

   cout << "Nombre d'occurrences de la valeur 2 dans v : ";
   cout << count(v.begin(), v.end(),2) << endl;

   cout << "Nombre de valeur impaires dans v : ";
   cout <<  count_if(v.begin(), v.end(), estImpair) << endl;

   cout << "Le vecteur v trie croissant : "<< endl;
   sort(v.begin(), v.end());
   cout <<  v << endl;

   cout << "Le vecteur v trie decroissant : "<< endl;
   sort(v.begin(), v.end());
   reverse(v.begin(), v.end());
   cout <<  v << endl;

   cout << "Vecteur compose des sommes partielles de v : "<< endl;
   partial_sum(v.begin(), v.end(), vTest);
   for(int i : vTest){
      cout << i << " ";
   }
   cout << endl << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}