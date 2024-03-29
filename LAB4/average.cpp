#include <iostream>

using namespace std;

int main(){
    const int N=10;
    float a[N];
    float s=0;
    for(int i=0; i<10; ++i){
        cout << "Gentile utente, inserisca elemento n." << i+1 << endl;
        cin >> a[i];
    }
    
    for(int i=0; i<10; ++i){
        s += a[i];
    }
    cout << "La media è: " << s/N << endl;
    
}
