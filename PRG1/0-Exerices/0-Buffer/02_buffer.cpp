//---------------------------------------------------------
// Demo           : 2022-09-26_ex_1_4
// Fichier        : 2022-09-26_ex_1_4.cpp
// Auteur(s)      : BREGUET Guy-Michel
// But            : demo en classe PRG1B (ex 1.4)
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <cstdlib>      // EXIT_SUCCESS
#include <iostream>     // cout et cin
#include <limits>       // numeric_limits<streamsize>

using namespace std;
int main() {

   // variables de travail
   int      a, b;
   double   x, y;
   char     s;

   // justifier ce que vaut le buffer après CHAQUNE des instructions
   cout << "entrer des valeurs : ";                      // affiche une phrase
   cin.ignore(numeric_limits<streamsize>::max(), '\n');  //ignore toutes les données entrées avant le retour à la ligne
   cout << endl;                                         //fait un retour à la ligne
   cin >> a;                                             //stock la valeur entré par l'utilisateur dans a
   cin >> b;                                             //stock la valeur entré par l'utilisateur dans b
   cin.ignore(numeric_limits<streamsize>::max(), '\n');  //ignore toutes les données entrées avant le retour à la ligne et vide le buffer
   cin >> x;                                             //stock la valeur entré par l'utilisateur dans x
   cin >> y;                                             //stock la valeur entré par l'utilisateur dans y
   cout << "voulez-vous sauver [o/n] : ";                //affiche à l'utilisateur s'il veut sauvegarder
   cin >> s;                                             //stock la valeur entré par l'utilisateur dans s
   cout << "sauver : " << s << endl;                     //affiche la valeur que l'utilisateur a mis
   cin >> a;                                             //stock la valeur entré par l'utilisateur dans a
   cin >> b;                                             //stock la valeur entré par l'utilisateur dans b
   cin >> x;                                             //stock la valeur entré par l'utilisateur dans x
   
   // fin de programme
   cout << "Presser ENTER pour quitter";                 //affiche un string à l'utilisateur
   cin.ignore(numeric_limits<streamsize>::max(), '\n');  //igonore la valeur entré par l'utilisatuer
   return EXIT_SUCCESS;                                  //retrn un code de succès
}
