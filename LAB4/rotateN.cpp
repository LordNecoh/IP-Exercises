#include <iostream>
#include <cmath>
using namespace std;
int main(){
    const int N = 4;
    int v[N];
    int temp;
    int r;
    
    for(int i=0; i<N; ++i){
        cout << "Inserisca il numero intero alla posizione n." << i << endl;
        cin >> v[i];
    }
    cout << "Di quanto vuole ruotare? " << endl;
    cin >> r;
    cout << endl;
    if (r>0){
        if (abs(r) > N){
            r = abs(r)%N;
        }
        for (int j=r; j>0; --j){
            for (int i=N-1; i>0; --i){
                if (i==(N-1)){
                    temp = v[i];
                }
                v[i] = v[i-1];    
            }
            v[0] = temp;
        }
    }
    
    if (r<0){
        if (abs(r) > N){
            r = abs(r)%N;
        }
        else r = abs(r);
        for (int j = r; j>0; --j){
            for (int i=0; i<N; ++i){
                if (i == 0){
                    temp = v[i];
                }    
                
                v[i] = v[i+1];    
            }
            v[N-1] = temp;
        }
    }
    for(int j=0; j<N; ++j){
        cout << v[j] << endl;
    
    }
}
