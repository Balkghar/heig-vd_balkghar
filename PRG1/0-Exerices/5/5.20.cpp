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

void afficherVecteur(const vector<int>& vect);
void remplirCarre(vector<vector<int>>& vect, int taille);

int main() {
   int saisie;

   vector<vector<int>>  vect;


   do{
      cout << "Veuillez entrer un nombre impair : ";
      cin >> saisie;
      VIDER_BUFFER;
   }while(saisie%2==0);
   

   remplirCarre(vect, saisie);

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
void afficherVecteur(const vector<int>& vect){
   cout  << "[ ";
   for(int i = 0; i < vect.size(); ++i){
      if ( i ){
         cout << setw(3) << "| ";
      }
      cout << setw(2) << vect.at(i);
   }
   cout << setw(2) << "]";
}
void afficherMatrice(const vector<vector<int>>& vect){
   for(int i = 0; i < vect.size(); ++i){
      if(i = 0){
         
      }
      for(int j = 0; j < vect[i].size(); ++j){
         
         
      }
      if(i = vect.size()){

      }
   }
}
void remplirCarre(vector<vector<int>>& vect, int taille){
   vect.resize(taille);
   for(int i = 0; i < taille; ++i){
      vect[i].resize(taille);
   }
   int noLigne = taille -1;
   int noColonne = taille /2;
   for(int k = 1; k <= taille*taille; ++k){
      vect[noLigne][noColonne] = k;
      ++noLigne;
      ++noColonne;
      if(noLigne == taille){
         noLigne = 0;
      }
      if(noColonne == taille){
         noColonne = 0;
      }
      if(vect[noLigne][noColonne] != 0){
         if(noLigne ==0){
            noLigne = taille-1;
         }
         else{
            --noLigne;
         }
         if(noColonne == 0){
            noColonne = taille -1;
         }
         else{
            --noColonne;
         }
         --noLigne;
      }
   }
   for(int i = 0; i < vect.size(); ++i){
      afficherVecteur(vect[i]);
      cout << endl;
   }
}