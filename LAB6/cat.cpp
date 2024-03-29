#include <iostream>
#include <vector>

std::vector<int> cat(std::vector<int> v1, std::vector<int> v2){
    std::vector<int> v12;
    v12.resize(v1.size()+v2.size());
    unsigned int j=0;
    for(unsigned int i=0; i<v1.size(); ++i){
        v12.at(j) = v1.at(i);
        ++j;
    }
    for(unsigned int k=0; k<v2.size(); ++k){
        v12.at(j) = v2.at(k);
        ++j;
    }
    
    return v12;
}

void printVector(const std::vector<int>& v){
    for(int i=0; i<(static_cast<int>(v.size())); ++i){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
}

