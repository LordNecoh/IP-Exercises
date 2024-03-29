#include <iostream>
using namespace std;

int main(){
    const int N = 5;
    int * v;
    v = new int[N];
    int j=1;
    for(int i=0; i<(N); ++i){
        
        *(v+i) = j;
        j += 2;
    }
    for(int i=0; i<N; ++i){
        cout << *(v+i) << endl;
    }
    cout << endl;
    delete [] v;
    v = nullptr;
    v = new int[2*N];
    j=1;
    for(int i=0; i<(2*N); ++i){
        
        *(v+i) = j;
        j += 2;
    }
    for(int i=0; i<(2*N); ++i){
        cout << *(v+i) << endl;
    }
    delete []v;
    v = nullptr;
}
