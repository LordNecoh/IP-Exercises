#include <iostream>
using namespace std;

int main(){

    int n;
    bool fine=false;
    
    do{
        cout << "Gentile utente, inserisca un numero maggiore di zero: " << endl;
        cin >> n;
        
        if(n <=0){
            cout << "Avevo detto maggiore di zero. " << endl;
            return 1;
        }
        for (int i=0; i<n; ++i){
            cout << "|";
        }
        cout<< ""<< endl;
        cout << "Inserisca '0' per interrompere: " << endl;
        cin >> n;
        if(n == 0)
        fine = true;
    }    
    while(!fine);
        
        
}
