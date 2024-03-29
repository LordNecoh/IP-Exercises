#include <iostream>
using namespace std;

int main(){

    int n,d;
    int emptySpaces,fullSpaces;
    cout << "Gentile utente inserisca un numero maggiore di zero: " << endl;
    cin >> n;
    d = 2*n+1;
    
       
    for(int i=1; i<=d; i = i+2){
        fullSpaces = i;
        emptySpaces = (d-i)/2;
        
        while(emptySpaces > 0 || fullSpaces > 0){
        
            if (emptySpaces > 0){
                --emptySpaces;
                cout << " ";
            }
            if (emptySpaces == 0){
            
                --fullSpaces;
                cout << "*";
            }
        }        
        cout << '\n';
    
    }
    
    
    for(int i=d-2; i>0; i = i-2){
        fullSpaces = i;
        emptySpaces = (d-i)/2;
        
        while(emptySpaces > 0 || fullSpaces > 0){
        
            if (emptySpaces > 0){
                --emptySpaces;
                cout << " ";
            }
            if (emptySpaces == 0){
            
                --fullSpaces;
                cout << "*";
            }
        }        
        cout << '\n';
    
    }

}
