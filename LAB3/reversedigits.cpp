#include <iostream>
using namespace std;

int main(){

    int n;
    bool fine=false;
    
    do{
        cout << "Gentile utente, inserisca un numero positivo (0 o negativo per uscire): " << endl;
        cin >> n;
        
        if (n<=0) 
            fine=true;
        
        int inv = 0;    
        
        while(n>0){ 
            int mod = (n%10);
            n = n/10;
            inv = inv*10;
            inv += mod;
            
            
        }
        
        cout << inv << endl;
    
    }
    while(!fine);
    
    cout << "Arrivederci! " << endl;
}
