#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    
    float n,guess;
    int c;
    bool fine = false;
    
    cout << "Amico, inserisci un numero reale: " << endl;
    cin >> n;
    cout << "Bravo, adesso indovinane la radice: " << endl;
    do{

        
        cin >> guess;
        ++c;
        if(sqrt(n) == guess){
            cout << "Grande, hai indovinato al tentativo n." << c << endl;
            fine = true;
        }
        else{
            cout << "No amico, hai sbagliato." << endl;
            cout << "Vuoi un altro tentativo?" << endl;
            string yOn;
            cin >> yOn;
            
            if(yOn == "no" || yOn == "NO" || yOn == "No" || yOn == "Nah" || yOn == "nah")
            fine = true;
            else
            cout << "Okay, riprova:" << endl;
        }
        
    }
    while(!fine);
    
    
    
    
}
