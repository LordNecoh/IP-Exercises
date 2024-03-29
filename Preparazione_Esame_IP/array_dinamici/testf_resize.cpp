#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 3);
    push_back(vettore, 1);
    push_back(vettore, 1);
    push_back(vettore, 1);
    resize(vettore, 5);
    
    stampaVettore(vettore);
    
    push_back(vettore, 2);
    push_back(vettore, 2);
    
    stampaVettore(vettore);
    
    resize(vettore, 3);
    
    stampaVettore(vettore);
    
    try{
        resize(vettore, -10);
    }
    catch(std::string negativeCapacity){
        std::cout << negativeCapacity << std::endl;
    }
    
    
}
