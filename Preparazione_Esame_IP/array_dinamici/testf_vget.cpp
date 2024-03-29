#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 3);
    push_back(vettore, 1);
    push_back(vettore, 2);
    push_back(vettore, 1);
    std::cout << get(vettore, 1) << std::endl; 
    try{
        get(vettore, 5);
    }
    catch(std::string out_of_range){
        std::cout << out_of_range << std::endl;
    }
}
