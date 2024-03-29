#include <iostream>
using namespace std;

int main(){

    bool fine=false;
    char choice;
    
        cout << "Scelgi un colore " << endl;
        cout << endl;
    while(!fine){
        cout << "(R) Rosso" << endl;
        cout << "(B) Blu" << endl ;
        cout << "(N) Nero" << endl;
        cout << "(G) Giallo" <<endl;
        cout << "(V) Viola" <<endl;
        cout << endl;
        cin >> choice;

        

            switch(choice){
                case 'R': case 'r':
                    cout << "Il tuo colore preferito è il Rosso! ";
                    fine = true;
                break;
                case 'B': case 'b':
                    cout << "Il tuo colore preferito è il Blu!";
                    fine = true;
                break;
                case 'N': case 'n':
                    cout << "Il tuo colore preferito è il Nero!";
                    fine = true;
                break;
                case 'G': case 'g':
                    cout << "Il tuo colore preferito è il Giallo!";
                    fine = true;
                break;
                case 'V': case 'v':
                    cout << "Il tuo colore preferito è il Viola!";
                    fine = true;
                break;               
            }

            cout << ""<< endl;
            cout << ""<< endl;

    }
}
