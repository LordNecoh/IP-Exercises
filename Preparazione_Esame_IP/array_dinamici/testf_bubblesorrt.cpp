#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 5);
    safe_push_back(vettore, 12);
    safe_push_back(vettore, 2);
    safe_push_back(vettore, 5);
    safe_push_back(vettore, 92);
    safe_push_back(vettore, 33);
    stampaVettore(vettore);
    
    BubbleSort(vettore);
    stampaVettore(vettore);
    
}
