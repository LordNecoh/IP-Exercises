#include <iostream>
using namespace std;
int main(){
    const int N = 4;
    int v[N];
    int temp;
    
    for(int i=0; i<N; ++i){
        cout << "Inserisca il numero intero alla posizione n." << i << endl;
        cin >> v[i];
    }
    cout << endl;
    for (int i=N-1; i>0; --i){
        if (i==(N-1)){
            temp = v[i];
        }
        v[i] = v[i-1];    
    }
    v[0] = temp;
    
    
    for(int j=0; j<N; ++j){
        cout << v[j] << endl;
    
    }
}
