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
#include <vector>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;
int nombreMedaille(const vector<string>& pays, const vector<int>& oor, const vector<int>& argent, const vector<int>& bronze, const string nomPays){
   int i = 0;
   while(pays.at(i) != nomPays){
      ++i;
   }
   return oor[i] + argent[i] + bronze[i];
}
int nombre(const vector<int>& vect){
   int number = 0;
   for(int i = 0; i < vect.size(); ++i){
      number += vect.at(i);
   }
   return number;
}
int main() {

   vector<string> pays = {"Canada","Chine", "Allemagne", "Corée", "Japon", "Russie","Etats-Unis"};
   vector<int> oor    = {     1,       1,       0,          1,       0,     100,          1};
   vector<int> argent = {     0,       1,       0,          0,       1,       0,          1};
   vector<int> bronze = {     1,       0,       1,          0,       1,       0,          0};

   cout << "Nombre de médaille(s) gagnée(s) par la Russie : " << nombreMedaille(pays, oor, argent, bronze, "Russie") << endl;
   cout << "Nombre d'or gagné : " << nombre(oor) << endl;
   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}