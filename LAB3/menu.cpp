#include <iostream>
using namespace std;

int main(){

    bool fine=false;
    int choice;
    
    while(!fine){
        cout << "1 Prima scelta" << endl;
        cout << "2 Seconda scelta" << endl ;
        cout << "3 Terza scelta" << endl;
        cout << "0 Uscita dal programma" <<endl;
        cin >> choice;
        
        if (choice>3 || choice<0){
            cout << "Scelta non valida" << endl;
        }
        else{
            switch(choice){
                case 1:
                    cout << "Hai fatto la prima scelta";
                break;
                case 2:
                    cout << "Hai fatto la seconda scelta";
                break;
                case 3:
                    cout << "Hai fatto la terza scelta";
                break;
                case 0:
                    cout << "Arrivederci!";
                    fine = true;
                break;
                
            }
            cout << ""<< endl;
            cout << ""<< endl;
     }
    }
}
