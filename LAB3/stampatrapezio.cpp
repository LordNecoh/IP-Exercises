#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int b1,b2;
    
    cout << "Gentile utente, inserisca due numeri maggiori di zero: " << endl;
    cin >> b1 >> b2;
    
    if (b1<=0 || b2<=0){
        cout << "Devono essere entrambi maggiori di zero." << endl;
    return 1;
    }
    
    for(int i = 1; i<=(abs(b1-b2)+1); ++i) {
        for(int j = 1; j <= b1+i-1; ++j){
            cout << "x ";
        }
        cout << endl;
    }
}
