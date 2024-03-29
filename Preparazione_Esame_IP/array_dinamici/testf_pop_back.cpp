#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 2);
    push_back(vettore, 1);
    std::cout << pop_back(vettore) << std::endl;
    try{
        pop_back(vettore);
    }
    catch(std::string empty){
        std::cout << empty << std::endl;
    }
}
