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
#include <array>
#include <numeric>
#include <algorithm>
#include <string>

#define VIDER_BUFFER cin.ignore(numeric_limits<streamsize>::max(),'\n')
using namespace std;

bool trier2(int a, int b){
   return a > b;
}

class Est_multiple_de {
      int n;
   public:
      Est_multiple_de(int n) : n(n) {}
      bool operator() (int i) {return (i % n) == 0;}
};

template <typename T> class CVector;

template <typename T>
ostream& operator<<(ostream& os, const CVector<T>& cv) {
   return os << cv.x << ' ' << cv.y;
}

template <typename T>
class CVector {
      friend ostream& operator<< <T>(ostream& os, const CVector<T>& cv);
      
      T x, y;
   public:
      CVector() {}
      CVector(T a, T b)
      : x(a), y(b) {}
};

int main() {
   /*
   vector<int> test = {1,5,2,4,1,9,6};

   sort(test.begin(), test.end(), trier2);

   for(int i : test){
      cout << i << " ";
   }
   cout << endl;

   cout << count_if(test.begin(), test.end(), Est_multiple_de(2));

   cout << endl;

   CVector test2(1,2);

   cout << test2;
   

   vector<int> v = {1,2,3,1,2,3,3,3,3};

   sort(v.begin(), v.end());

   v.erase(unique(v.begin(), v.end()), v.end());

   for(int i : v){
      cout << i << " ";
   }

   cout << endl;*/

   int x = numeric_limits<int>::max();

   cout << (x-1) << endl;
   cout << (x+1) << endl;

   cout << "Entrez ENTER pour quitter.";
   VIDER_BUFFER;
   return EXIT_SUCCESS;                                  //retourne un code de succès
}