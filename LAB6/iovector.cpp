#include <iostream>
#include <vector>

void readVector(std::vector<int>& v){
    std::cout << "Inserire dimensione della sequenza: " << std::endl;
    int n;
    std::cin >> n;
    while(n < 0){
        std::cout << "Dev'essere positiva " << std::endl;
        std::cin >> n;
    }
    v.resize(n);
    std::cout << "Inserire i valori della sequenza: " << std::endl;
    for(int i=0; i<n; ++i){
        std::cin >> v[i];
    }
    std::cout << std::endl;
}

void printVector(const std::vector<int>& v){
    for(int i=0; i<(static_cast<int>(v.size())); ++i){
        std::cout << v[i] << std::endl;
    }
}


