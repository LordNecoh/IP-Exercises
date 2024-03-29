#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 5);
    destroy(vettore);
    try{
        get(vettore, 1);
    }
    catch(std::string out_of_range){
        std::cout << out_of_range << std::endl;
    }
}
