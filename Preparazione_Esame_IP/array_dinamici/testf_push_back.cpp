#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 2);
    push_back(vettore, 1);
    for(int i=0; i<vettore.size; ++i){
        std::cout << vettore.store[i] << std::endl;
    }
    std::cout << std::endl;
    push_back(vettore, 2);
    stampaVettore(vettore);
    try{
    push_back(vettore, 3);
    }
    catch(std::string full){
        std::cout << full << std::endl;
    }
   
}
