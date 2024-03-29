#include <iostream>
#include <vector>

std::vector<int> reverse(std::vector<int> v){
    std::vector<int> b(v.size());
    for(int i=0; i<(static_cast<int>(b.size())); ++i){
        b.at(b.size()-(i+1)) = v.at(i);
    }
    return b;
}

void printVector(const std::vector<int>& v){
    for(int i=0; i<(static_cast<int>(v.size())); ++i){
        std::cout << v[i] << std::endl;
    }
}


