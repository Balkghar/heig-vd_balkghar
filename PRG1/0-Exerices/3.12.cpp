//---------------------------------------------------------
// Fichier      : 3.12.cpp
// Auteur       : Hugo Germano
// Date         : 17.10.2022

// But          : Exercice  
//
// Remarque     : 
//
// Modifs       :
//
// Compilateur  : gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iomanip>
#include <iostream>     // cout et cin

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')

using namespace std;

void viderBuffer(void){
  int c;
  while((c=getchar()) != EOF && c != '\n');
 
}
int main() {
   
   double tabNotes[4];
   double moyenneNote;

   cout << "Entrez 4 notes : ";
   cin >> tabNotes[0];
   cin >> tabNotes[1];
   cin >> tabNotes[2];
   cin >> tabNotes[3];
   viderBuffer();

   moyenneNote = (tabNotes[0] + tabNotes[1] + tabNotes[2] + tabNotes[3])/4;

   cout << fixed << setprecision(1) << "Moyenne : " << moyenneNote << " - ";

   if(moyenneNote < 4.0){
      cout << "Insufissant" << endl;
   }
   else if(moyenneNote > 4.0 && moyenneNote < 4.5){
      cout << "Moyen" << endl;
   }
   else if(moyenneNote > 4.5 && moyenneNote < 5){
      cout << "Bien" << endl;
   }
   else if(moyenneNote > 5 && moyenneNote < 5.5){
      cout << "Très bien" << endl;
   }
   else if(moyenneNote > 5.5){
      cout << "Excellent" << endl;
   }

   cout << "Entrez ENTER pour quitter.";
   viderBuffer();
   return EXIT_SUCCESS;                                  //retourne un code de succès
}