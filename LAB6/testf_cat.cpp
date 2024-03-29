#include <iostream>
#include <vector>
#include "cat.h"

int main(){
    //Dichiarazioni
    std::vector<int> first(1);
    std::vector<int> second(1);
    int val;
    int j=0;
    
    //Inserimenti
    std::cout << "(First) Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        first.resize(j+1);
        first.at(j) = val;
        ++j;
        std::cin >> val;
    }
    j=0;
    std::cout << "(Second) Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        second.resize(j+1);
        second.at(j) = val;
        ++j;
        std::cin >> val;
    }
    
    //Calcolo
    std::cout << std::endl;
    std::vector<int> total(cat(first,second));
    
    //Output
    printVector(first);
    printVector(second);
    printVector(total);
}
