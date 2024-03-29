#include <iostream>

using namespace std;

int main(){

    const int N = 10;
    int a[10];
    
    for(int i=0; i<10; ++i){
        a[i] = N-i;

    }
    for(int j=0; j<10; ++j){
        cout << a[j] << endl;
    }
}
