#include <iostream>

using namespace std;

int main(){
    const int N=10;
    float a[N];
    for(int i=0; i<10; ++i){
        a[i] = (static_cast<float>(i)*i)/2;
    }
    
    for(int i=0; i<10; ++i){
        cout << a[i] << endl;
    }
    
    
}
