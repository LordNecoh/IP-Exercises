#include <iostream>

using namespace std;

int main(){

    int a[10];
    
    for(int i=0; i<10; ++i){
        cout << "Gentile utente, inserisca elemento n." << i+1 << endl;
        cin >> a[i];
    }
}
