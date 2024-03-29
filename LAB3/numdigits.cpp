#include <iostream>
using namespace std;

int main(){
    int n;
    int d=0;
    cout << "Gentile utente, inserisca un numero intero: " << endl;
    cin >> n;
    
    while (n>0){
        n = n/10;
        d += 1;
    }
    
    cout << d << endl;

}
