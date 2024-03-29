#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string g1,g2;
    bool fine = false;
    
    
    
    do{
        bool ok = false;
        cout << "Inserire le mosse di morra cinese dei due giocatori (con l'iniziale maiuscola): " << '\n';
        cin >> g1 >> g2; 
        if (g1 == g2){
            cout << "Pareggio!" << endl;
            ok = true;
        }
        if((g1 == "Carta" && g2 == "Sasso") || (g1 == "Sasso" && g2 == "Forbice") || (g1 == "Forbice" && g2 == "Carta")){
            cout << "Vince il giocatore uno!" << endl;
            ok = true;
        }
        if((g2 == "Carta" && g1 == "Sasso") || (g2 == "Sasso" && g1 == "Forbice") || (g2 == "Forbice" && g1 == "Carta")){
            cout << "Vince il giocatore due!" << endl;
            ok = true;
        }
        
        if(!ok){
            cout << "L'input è sbagliato" << endl;
        }
        cout << "Inserire 's' per giocare ancora" << endl;
        cout << "" << endl;
        cin >> g1;
        
        if (g1 != "s" && g1 != "S"){
            fine = true;
            
            
          
        }
    }
    while(!fine);





}
