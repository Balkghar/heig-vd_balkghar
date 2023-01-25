#include <iostream>




int sommeNPremiersEntiers(int n);

using namespace std;

int main(){

    cout << sommeNPremiersEntiers(10) << endl;

}

int sommeNPremiersEntiers(int n){

    try{
        if(n < 0){
            throw invalid_argument( "VALEUR NEGATIVE, TU ES STUPIDE !!!!!!!!!!!" ); 
        }
        int somme = 0;
        for(int i = 1 ; i <= n ; ++i){
            somme += i;
        }
        return somme;
    }
    catch(const exception& e){
        cerr << e.what() << '\n';
    }
}