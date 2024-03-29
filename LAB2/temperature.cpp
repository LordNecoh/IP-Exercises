#include <iostream>
using namespace std;

int main(){

    int temp;
    string out;
    cout << "Gentile utente, inserisca una temperatura: " << '\n';
    cin >> temp;
    
    if (temp>-21 && temp<1)
            out = "Freddo dannato";
        
    if (temp>0 && temp<16)
            out = "Freddo";
        
    if (temp>15 && temp<24)
            out = "Normale";
        
    if (temp>23 && temp<31)
            out = "Caldo";
        
    if (temp>30 && temp<41)
            out = "Caldo da morire";
            
    if (temp>40 || temp<-20)
            out = "Non ci credo, il termometro dev'essere rotto";

    cout << out << '\n';
}
