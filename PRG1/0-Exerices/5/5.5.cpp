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

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

void moyenne(){
   int i = 0;
   double notes[10];
   double saisie;
   double total;
   double moyenneNotes;
   cout << "Entrez la liste de vis notes (10 notes max, 0 pour quitter :" << endl;
   do{
      cin >> saisie;
      VIDER_BUFFER;
      if(saisie != 0){
         notes[i]= saisie;
      }
      i++;
   }while(saisie != 0 && i != 10);

   if(i != 1){
      for(int j = 0; j < i; ++j){
         total += notes[j];
      }
      moyenneNotes = total/i;
      cout << "La moyenne des notes saisies : " << moyenneNotes << endl;
   }
   else{
      cout << "Moyenne non calculable"<< endl;
   }
   

}

int main() {
   //déclaration des constantes
   const int DECIMALES = 2;


   cout << fixed << setprecision(DECIMALES);

   moyenne();

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}