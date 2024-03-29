#include <iostream>
using namespace std;
int main(){
    const int N = 4;
    int v[N];
    
    for(int i=0; i<N; ++i){
        cout << "Inserisca il numero intero alla posizione n." << i << endl;
        cin >> v[i];
    }
    for (int i=0; i<N; ++i){
        if (i != (N-1))
            v[i] = v[i+1];
        else
            v[i] = 0;
        
        
    }
    
    for(int j=0; j<N; ++j){
        cout << v[j] << endl;
    
    }
}
