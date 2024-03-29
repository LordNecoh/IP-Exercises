#include <iostream>

using namespace std;

int main(){
    
    char curr_char,min_char='Z';
    bool fine=false;
    
    while (!fine){
    
        cout << "Gentile utente, inserisca una lettera maiuscola: " << endl;
        cin >> curr_char;
        
        if (curr_char >= 'A' &&curr_char <= 'Z'){
            if (curr_char < 'Z'){
                min_char = curr_char;
            }
        
        }
        else 
        fine = true;
    
    }
    
    cout << "La lettera più piccola inserita è: " << min_char << endl;
    
}
