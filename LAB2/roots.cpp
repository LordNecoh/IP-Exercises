#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,c,delta,x1,x2;
    
    cout << "Gentile utente, inserisca tre numeri reali: " <<  endl;
    cin >> a >> b >> c;
    delta = (b*b)-(4*a*c);
    
    if (delta <0) {
        cout << "Impossibile" << endl;
        return -1;
    }
    
        x1 = (-b + sqrt(delta))/(2*a);
    
        x2 = (-b - sqrt(delta))/(2*a);
    
        cout << "x1 = " << x1 << " x2 = " << x2 << endl;
        
    
    return 0;
}
