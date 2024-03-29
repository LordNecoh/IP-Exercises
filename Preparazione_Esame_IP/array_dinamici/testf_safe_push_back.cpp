#include <iostream>
#include "myvector.h"

int main(){
    myvector vettore;
    create(vettore, 3);
    safe_push_back(vettore, 0);
    safe_push_back(vettore, 1);
    safe_push_back(vettore, 2);
    safe_push_back(vettore, 3);
    safe_push_back(vettore, 4);
    
    stampaVettore(vettore);

}
