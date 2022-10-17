//---------------------------------------------------------
// Fichier      : 3.10.cpp
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
#include <limits>       // numeric_limits<streamsize>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;
int main() {
   //déclaration des constantes
   const int TAILLE_DES_TABLEAUX = 3;
   //déclaration des variables
   int chiffres[TAILLE_DES_TABLEAUX];
   int tempInt;
   bool estTrie = false;
   int tailleDuTableau;

   tailleDuTableau = sizeof(chiffres)/sizeof(chiffres[0]);
   for(int i = 0; i < tailleDuTableau; i++){
      cout << "Veuillez entrer un chiffre : " ;
      cin >> chiffres[i];
      VIDER_BUFFER;
   }
   while(!estTrie){
      for(int i = 0; i < tailleDuTableau; i++){
         if(chiffres[i] > chiffres[i+1] && i != tailleDuTableau){
            tempInt = chiffres[i];
            chiffres[i] = chiffres[i+1];
            chiffres[i+1] = tempInt;
         }
      }
      for(int i = 0; i < tailleDuTableau; i++){
         if(i != tailleDuTableau){
            estTrie = chiffres[i] < chiffres[i+1];
            if(!estTrie){break;}
         }
      }
   }
   cout << endl;
   for(int i = 0; i < tailleDuTableau; i++){
         cout << chiffres[i] << endl;
   }

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}
