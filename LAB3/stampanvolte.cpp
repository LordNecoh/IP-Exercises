#include <iostream>
using namespace std;

int main(){
    
    //Dichiarazioni

    int n;
    char c;
    
    //Input
    
    cout << "Gentile utente, inserisca un carattere: " << endl;
    cin >> c;
    cout << "Gentile utente, inserisca un numero positivo: " << endl;
    cin >> n;
    
    //Controllo input
    
    if (n<=0){
        cout << "Dannazione, avevo detto postivo!" << endl;
        return 1;
    }
    
    //Calcolo e output
    
    for (int i=0; i<n; ++i){
        cout << c << endl;
    
    
    }
    
    

}
