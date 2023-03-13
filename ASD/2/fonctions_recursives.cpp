#include <iostream>
#include <string>
void f1(int n){
   if(n){
      std::cout << std::string(n,'*');
      std::cout << std::endl;
      f1(n-1);
   }
}
void f2(int n, int d){
   if(n < d){
      std::cout << std::string(n,'*');
      std::cout << std::endl;
      f2(n+1,d);
   }
}
void f3(unsigned n, unsigned m) {
   if (n < m) {
      std::cout << std::string(n, '*') << std::endl;
      f3(n * 3, m);
      std::cout << std::string(n, '*') << std::endl;
   }
}

//------------------------------------------------------
void f4(unsigned n) {
   if (n) {
      std::cout << std::string(n, '*') << std::endl;
      f4(n / 3);
      if (n)
         std::cout << std::string(n, '*') << std::endl;
   }
}
//------------------------------------------------------
void f5(unsigned n, unsigned m, unsigned o) {
   if (n < m) {
      std::cout << std::string(n, '*') << std::endl;
      f5(n * o, m, o);
      std::cout << std::string(n, '*') << std::endl;
   }
}

int main(){

   f1(5);
   std::cout << std::endl;
   f2(2,8);
   std::cout << std::endl;
   f3(1,30);
   std::cout << std::endl;
   f4(18);
   std::cout << std::endl;
   f5(1, 18, 3);
}