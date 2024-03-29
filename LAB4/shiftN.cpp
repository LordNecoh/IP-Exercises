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
    cout << "Di quanto vuole traslare? " << endl;
    cin >> r;
    cout << endl;
    if (r>0){
        if (abs(r) >= N){
        //Funzionerebbe uguale senza questo if, ma sarebbe meno efficente
            for (int i=0; i<N; ++i){
                v[i] = 0;
            }
        }
        else{
        
            for (int j=r; j>0; --j){
                for (int i=(N-1); i>=0; --i){
                    if (i == 0)
                        v[i] = 0;                        
                    else
                        v[i] = v[i-1];
                }
            }
        }
   }
    if (r<0){
        
        r = abs(r);
        for (int j = r; j>0; --j){
            for (int i=0; i<N; ++i){
                if (i != (N-1))
                    v[i] = v[i+1];
                else
                    v[i] = 0;
            }
        
        }
    
    }
    for(int j=0; j<N; ++j){
            cout << v[j] << endl;
    }
}
