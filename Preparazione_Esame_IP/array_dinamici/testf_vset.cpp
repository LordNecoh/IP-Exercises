#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 3);
    push_back(vettore, 1);
    push_back(vettore, 1);
    push_back(vettore, 1);
    set(vettore, 3, 1);
    stampaVettore(vettore);
    try{
        set(vettore, 2, -1);
    }
    catch(std::string out_of_range){
        std::cout << out_of_range << std::endl;
    }
}
