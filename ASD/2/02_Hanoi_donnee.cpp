//---------------------------------------------------------
// Fichier        : 02_Hanoi_donnee.cpp
// Version        : 02 - 2022-03-08
// Auteur(s)      : BREGUET Guy-Michel, Germano Hugo
// But            : algorithme des tours de Hanoi (récursif)
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

using Disque = char;
using Tour   = vector<Disque>;
using Tours  = vector<Tour>;

unsigned nbreAppels;      // variable globale pour compter les appels

//------------------------------------------------------
// afficher le contenu d'une tour (les disques)
ostream& operator<< (ostream& os, const Tour& tour);

//------------------------------------------------------
// afficher les tours de Hanoi
ostream& operator<< (ostream& os, const Tours& tours);

//------------------------------------------------------
void transfert(Tour& from, Tour& via, Tour& to, size_t n);

//------------------------------------------------------
// main
//------------------------------------------------------
int main () {

   cout << "Tour de Hanoi" << endl;

   vector<Tour> tours(3);                    // 3 tours
   Tour& gauche = tours[0];
   Tour& centre = tours[1];
   Tour& droite = tours[2];

   // tours à déplacer
   gauche = {'A', 'B', 'C'};

   //        from    via     to      height
   transfert(gauche, centre, droite, gauche.size());

   cout << tours << endl;

   cout << "hauteur     : " << droite.size() << endl;
   cout << "nbre appels : " << nbreAppels    << endl;

   // fin du programme
   return EXIT_SUCCESS;
}

//------------------------------------------------------
// afficher le contenu d'une tour (les disques)
ostream& operator<< (ostream& os, const Tour& tour) {
   for (const Disque d : tour)
      os << d << " ";
   return os;
}

//------------------------------------------------------
// afficher les tours de Hanoi
ostream& operator<< (ostream& os, const Tours& tours) {
   int n=0;
   for (const Tour& t : tours)
      os << "T" << ++n << " " << t << endl;
   return os;
}

//------------------------------------------------------
void transfert(Tour& from, Tour& via, Tour& to, size_t n) {

   

}


//      Tour de Hanoi
//      T1 A B
//      T2
//      T3 C
//
//      T1 A
//      T2 C
//      T3 B
//
//      T1
//      T2 A
//      T3 B C
//
//      T1
//      T2 B C
//      T3 A
//
//      T1 B
//      T2 A
//      T3 C
//
//      T1
//      T2 C
//      T3 A B
//
//      T1
//      T2
//      T3 A B C
//
//      T1
//      T2
//      T3 A B C
//
//      hauteur     : 3
//      nbre appels : 7
