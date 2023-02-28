#include <iostream>

class exception_hgo {
    public:
        exception_hgo() noexcept;
        exception_hgo(const exception_hgo&) noexcept;
        exception_hgo& operator=(const exception_hgo&) noexcept;
        virtual ~exception_hgo();
        virtual const char* what() const noexcept;
};

int sommeNPremiersEntiers(int n);

using namespace std;

int main(){

    cout << sommeNPremiersEntiers(10) << endl;

}

int sommeNPremiersEntiers(int n){

    try{
        if(n < 0){
            //throw exception_hgo("patate");
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