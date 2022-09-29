//---------------------------------------------------------
// Fichier  : 0-labo_1.cpp
// Auteur   : Dani Tiago Faria Dos Santos & Hugo Germano
// Date     : 29.09.2022

// But      : Logiciel permettant de commander une quantités d'objet d'un menu prédifini
//
// Remarque : Premier laboratoire de PRG1
//
// Modifs   :
//
// Compilateur 
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include<limits>        //utilisé pour avoir les limites numériques (source: https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus)

using namespace std;

int main() {
   //initialisation des prix des objets du menu
   float entree         = 4.50f, 
         platPrincipal  = 12.50f, 
         boisson        = 3.00f, 
         dessert        = 6.00f, 
         cafe           = 2.90f;

   cout << "Bonjour ce programe vous permet de commander dans le fameux restaurant de la green katze Corp&Co. \nVoici le prix des objets du menu\n================================" << endl;

   cout << " - entree   : " << endl;
   cout << " - Plat     : " << endl;
   cout << " - Boisson  : " << endl;
   cout << " - Dessert  : " << endl;
   cout << " - Cafe     : " << endl;


   cout << "Presser ENTER pour quitter";
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   return EXIT_SUCCESS;
}
