#include <iostream>

using namespace std;

int main(){

    int v[15];
    int item, pos;
    bool trovato = false;
    
    for(int i=0; i<15; ++i){
        cout << "Gentile utente, inserisca il numero intero alla posizione n." << i << endl;
        cin >> v[i];
    }
    
    cout << "Gentile utente, inserisca l'item che desidera trovare:" << endl;
    cin >> item;
    for(int i=0; i<15 && not trovato; i++){
    
        if (v[i] == item){
            trovato = true;
            pos = i;
        }
   
    }
    
    if (trovato){
        cout << "L'item " << item << " è stato trovato in posizione " << pos << endl;
    }
    else
        cout << "Mi duole informarla che l'item non è stato trovato" << endl;
}
