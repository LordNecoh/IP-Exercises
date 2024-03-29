#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 10);
    std::cout << looks_consistent(vettore) << std::endl;
    vettore.size = 100;
    std::cout << looks_consistent(vettore) << std::endl;
}
