#include <iostream>
using namespace std;
#include "d_array.h"

int main(){
    dynamic_array a;
    create_d_array(a, 4, 0);
    try{
        set(a, 2, 3);
        cout << get(a,2) << endl;
        cout << get(a,64) << endl;
    }
    catch(string outOfRangeIndex){
        cout << outOfRangeIndex << endl;
    }
}
