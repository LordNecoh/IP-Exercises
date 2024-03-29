#include <iostream>
using namespace std;

int main(){

    int n;
    bool fine=false;
    
        cout << "Gentile utente, inserisca un numero intero" << endl;
        cin >> n;
        
        int nVerifica = n;
       
            
            
        
        int inv = 0;    
        
        while(n>0){ 
            int mod = (n%10);
            n = n/10;
            inv = inv*10;
            inv += mod;
            
            
        }
        
        if(nVerifica == inv)
        cout << "Il numero " << inv << " è palindromo" << endl;
        else
        cout << "Il suo numero non è palindromo :( " << endl;

}
