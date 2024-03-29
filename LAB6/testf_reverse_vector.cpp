#include <iostream>
#include <vector>
#include "reverse_vector.h"

int main(){

    std::vector<int> source(1);
    int val;
    int j=0;
    std::cout << "Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        source.resize(j+1);
        source.at(j) = val;
        ++j;
        std::cin >> val;
    }
    std::cout << std::endl;
    std::vector<int> dest(reverse(source));
    
}
