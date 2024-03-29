#include <iostream>
using namespace std;
#include "d_array.h"

int main(){
    dynamic_array a;
    create_d_array(a, 4, 2);
    set(a,2, 9);
    set(a,1, 28);
    set(a,3, 1);
    print_d_array(a);
    selectionSort(a);
    print_d_array(a);
}
