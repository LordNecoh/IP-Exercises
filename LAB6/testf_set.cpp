#include <iostream>
using namespace std;
#include "d_array.h"

int main(){
    dynamic_array a;
    create_d_array(a, 4, 0);
    set(a, 2, 9);
    print_d_array(a);
    try{
    set(a, 45, 9);
    }
    catch(string outOfRangeIndex){
        cout << outOfRangeIndex << endl;
    } 
}
