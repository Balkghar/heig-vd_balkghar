//---------------------------------------------------------
// Fichier      : 5.17.cpp
// Auteur       : Hugo Germano
// Date         : 20.11.2022

// But          : Exercice 5.17
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
void afficherVecteur(const vector<int>& vect){
   cout << "[";
   for(int i = 0; i < vect.size(); ++i){
      if ( i ){
         cout << ", ";
      }
      cout << vect.at(i);
   }
   cout << "]";
}
void vectorMerged(const vector<int>& vect1, const vector<int>& vect2, vector<int>& mergedVect){
   for(int i = 0; i < vect1.size(); ++i){
      mergedVect.push_back(vect1.at(i));
      if(vect2.size() > i){
      mergedVect.push_back(vect2.at(i));
      }
   }
}
void mergedVector(const vector<int>& vect1, const vector<int>& vect2, vector<int>& mergedVect){
   cout << "merge(";
   afficherVecteur(vect1);
   cout << ", ";
   afficherVecteur(vect2);
   cout << ") = ";
   if(vect1.size() > vect2.size()){
      vectorMerged(vect1, vect2, mergedVect);
   }else{
      vectorMerged(vect2, vect1, mergedVect);
   }
   afficherVecteur(mergedVect);
   cout << endl;
}
int main() {
   const vector<int> vect1 = {1,2,3,4,5,6,7,8,9};
   const vector<int> vect2 = {9,8,7,6};

   vector<int> mergedVect;

   mergedVect.resize(vect1.size()+vect2.size());
   
   mergedVector(vect1, vect2, mergedVect);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}