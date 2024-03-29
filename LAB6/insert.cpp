#include <iostream>
#include <vector>
#include <string>


 void shiftFrom(std::vector<int> &a, unsigned int index){
    for(unsigned int j=(a.size()-1); j>index; --j){
        if(j != 0) a.at(j) = a.at(j-1);
    }
    
}


std::vector<int> insert(std::vector<int> v, int i, int val){
    std::string err = "Indice out-of-range ";
    if((static_cast<unsigned int>(i))>v.size()) throw err;
    

    v.resize(v.size()+1);
    if(v.size() > 1){
        shiftFrom(v, static_cast<unsigned int>(i));
    }
    v.at(i) = val;
   

    
    return v;
}

void printVector(const std::vector<int>& v){
    for(int i=0; i<(static_cast<int>(v.size())); ++i){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
}
