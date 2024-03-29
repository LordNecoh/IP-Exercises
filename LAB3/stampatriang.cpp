#include <iostream>
using namespace std;

int main(){

    int n;
    
    cout << "Gentile utente, inserisca un numero maggiore di zero: " << endl;
    cin >> n;
    
    if (n<=0){
        cout << "Il suo numero non è maggiore di zero." << endl;
    return 1;
    }
    
    for(int i = 1; i<=n; ++i) {
        for(int j = 1; j <= i; ++j){
            cout << "* ";
        }
        cout << endl;
    }
}
