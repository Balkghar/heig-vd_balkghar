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

int convertToInt(const vector<int>& vInt, const vector<char>& vChar, char toFind){

   for(int i = 0; 0 < vChar.size(); ++i){
      if(vChar.at(i) == toFind){
         return vInt.at(i);
      }
   }
   return 0;
}

int calculerChiffreRomain(const string& chiffre){


   const vector<int> chiffreRomainInt =   {1,   5,    10,   50,   100,  500,  1000};

   const vector<char> chiffreRomainChar = {'I', 'V',  'X', 'L',   'C',  'D',  'M'};

   vector<int> chiffreInt(chiffre.size());
   
   int sommeFinale = 0;

   int d = 0;

   for(char i : chiffre){
      chiffreInt.at(d) = convertToInt(chiffreRomainInt, chiffreRomainChar, i);
      ++d;
   }
   for(int i = 0; i < chiffreInt.size(); ++i){
      if(i != chiffreInt.size()-1){
         if(chiffreInt.at(i) < chiffreInt.at(i+1)){
            sommeFinale -= chiffreInt.at(i);
         }
         else{
            sommeFinale += chiffreInt.at(i);
         }
      }
      else{
         sommeFinale += chiffreInt.at(i);
      }
   }
   
   return sommeFinale;
}

int main() {
   string lol;
   cout << "Veuillez entrer un chiffre romain : ";
   cin >> lol;
   VIDER_BUFFER;

   cout << "Votre chiffre romain correspond à : " << calculerChiffreRomain(lol) << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}