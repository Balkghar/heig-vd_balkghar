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

#include    <cstdlib>      // EXIT_SUCCESS
#include    <iostream>     // cout et cin
#include    <limits>       //utilisé pour avoir les limites numériques (source: https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus)

using namespace std;

int main() {
      //initialisation des prix des objets du menu
      const float ENTREE      = 4.50f, 
                  PLAT        = 12.50f, 
                  BOISSON     = 3.00f, 
                  DESSERT     = 6.00f, 
                  CAFE        = 2.90f;
      
      //initialisation des nombre de plat
            int   nbrEntree   = 0,
                  nbrPlat     = 0,
                  nbrBoisson  = 0,
                  nbrDessert  = 0,
                  nbrCafe     = 0;
            
            float totalEntrees      = 0.0f,
                  totalPlats        = 0.0f,
                  totalBoissons     = 0.0f,
                  totalDesserts     = 0.0f,
                  totalCafes        = 0.0f,
                  total             = 0.0f;

      cout << "Bonjour ce programe vous permet de commander dans le fameux restaurant de la green katze Corp&Co. \nVoici le prix des objets du menu\n================================" << endl;

      cout << " - Entree   : " << ENTREE << endl;
      cout << " - Plat     : " << PLAT << endl;
      cout << " - Boisson  : " << BOISSON << endl;
      cout << " - Dessert  : " << DESSERT << endl;
      cout << " - Cafe     : " << CAFE << endl;

      cout << "Votre commande" << endl;
      cout << "==============" << endl;

      cout << " - Nombre d'entree   : ";
      cin >> nbrEntree;

      cout << " - Nombre de plat    : ";
      cin >> nbrPlat;

      cout << " - Nombre de boisson : ";
      cin >> nbrBoisson;

      cout << " - Nombre de dessert : ";
      cin >> nbrDessert;

      cout << " - Nombre de cafe    : ";
      cin >> nbrCafe;

      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      totalEntrees = float(nbrEntree*ENTREE);
      total += totalEntrees;
      totalPlats = float(nbrPlat*PLAT);
      total += totalPlats;
      totalBoissons = float(nbrBoisson*BOISSON);
      total += totalBoissons;
      totalDesserts = float(nbrDessert*DESSERT);
      total += totalDesserts;
      totalCafes = float(nbrCafe*CAFE);
      total += totalCafes;


      cout << "Votre ticket" << endl;
      cout << "============" << endl;

      cout << " - " << nbrEntree          << "  entrees     : " << totalEntrees     << endl;
      cout << " - " << nbrPlat            << "  plats       : " << totalPlats       << endl;
      cout << " - " << nbrBoisson         << "  boissons    : " << totalBoissons    << endl;
      cout << " - " << nbrDessert         << "  desserts    : " << totalDesserts    << endl;
      cout << " - " << nbrCafe            << "  cafes       : " << totalCafes       << endl;
      cout << " -    total       : "      << total                                  << endl;

      cout << "Merci de votre visite !" << endl;
      cout << "Presser ENTER pour quitter";
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      return EXIT_SUCCESS;
}