//---------------------------------------------------------
// Fichier        : 02_01_nbre_carres.cpp
// Version        : 02 - 2022-03-08
// Auteur(s)      : Germano Hugo
// But            : algorithme pour calculer les nombre de carrés au sein d'un carré
// Modifications  :
// Remarque(s)    : NILL
//---------------------------------------------------------
#include <cmath>
#include <iostream>
int combienDeCarreAuTotalIter(int n){
   int total = 0;
   for(int i = n; i > 0; --i){
      total += (int)pow(2,i);
   }
   return total;
}
int combienDeCarreAuTotalRec(int n){
   if(n){
      return (int)pow(2,n)+combienDeCarreAuTotalRec(n-1);
   }else{
      return 0;
   }
}
int main(){
   std::cout << combienDeCarreAuTotalRec(4) << std::endl;
   std::cout << combienDeCarreAuTotalIter(4)<< std::endl;
}