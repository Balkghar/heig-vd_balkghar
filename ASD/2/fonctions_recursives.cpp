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
void f3(int n, int d){
   if(n < d){
      std::cout << std::string(n,'*');
      std::cout << std::endl;
      f3(n + n*2, d);
   }
}

int main(){

   f1(5);
   std::cout << std::endl;
   f2(2,8);
   std::cout << std::endl;
   f3(1,30);

}