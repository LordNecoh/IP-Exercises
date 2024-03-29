#include <iostream>

using namespace std;

int main(){
    int count=0;
    const int N = 15;
    int v[N];
    int item, pos, mid;
    bool trovato = false;
    int first=0,last=N-1;
    
    
    cout << "Gentile utente, le chiediamo di inserire 15 numeri interi in ordine crescente" << endl;
    for(int i=0; i<N; ++i){
        do{
            cout << "Inserisca il numero intero alla posizione n." << i << endl;
            cin >> v[i];
            count += 1;
        }while(v[i]<v[i-1]);
    }
    
    cout << "Inserisca l'item che desidera trovare:" << endl;
    cin >> item;
    while(first<=last && !trovato){
        
        mid =(first+last)/2;
        count += 1;
        if (v[mid]==item){
            trovato = true;
            pos = mid;
            count += 1;
        }
        else
            if(v[mid]>item){
                last=mid-1;
                count += 1;
            }
            else first= mid +1;
            
    
    }
    
    if (trovato){
        cout << "L'item " << item << " è stato trovato in posizione " << pos << endl;
    }
    else
        cout << "Mi duole informarla che l'item non è stato trovato" << endl;
        
    cout << count << endl;
}
