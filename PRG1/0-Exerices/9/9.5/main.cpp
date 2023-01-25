#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Identite {
    public:
        Identite() = default;
        Identite(const string& prenom, const string& nom) : prenom(prenom), nom(nom){
            try
            {
                if(prenom.empty()){
                    throw invalid_argument( "prenom ne peut pas etre une chaine vide." );
                }
                if(nom.empty()){
                    throw invalid_argument( "nom ne peut pas etre une chaine vide." );
                }
            }
            catch(const exception& e)
            {
                cout << "Exception survenue dans Identite::Identite()." << endl;
                cerr << e.what() << '\n';
                throw invalid_argument(e.what());
            }
        }

        string toString() const {
            return prenom + " " + nom;
        }
    private:
        string prenom;
        string nom;
};

class Personne {
    public:
        Personne(const string& prenom, const string& nom){
            try
            {
                identite = Identite(prenom, nom);
            }
            catch(const invalid_argument& e)
            {        
                cout << "Exception survenue dans Personne::Personne()." << endl;
                throw invalid_argument(e.what());
            }
        }
    private:
        Identite identite; 
};

int main() {
    try {
        {
            cout << "Debut du test 1." << endl
            << "Tentative de construction d'un objet du type Personne." << endl
            << "Parametres fournis: \"John Fitzgerald\", \"Kennedy\"" << endl;
            Personne personne1("John Fitzgerald", "Kennedy");
            cout << "Fin du test 1." << endl;
        }
        {
            cout << endl
            << "Debut du test 2." << endl
            << "Tentative de construction d'un objet du type Personne." << endl
            << "Parametres fournis: \"\", \"Marley\"" << endl;
            Personne personne2("", "Marley");
            cout << "Fin du test 2." << endl;
        }
    } catch (const invalid_argument&) {
        cout << "Exception survenue dans main()." << endl;
    }
    return EXIT_SUCCESS;
}