#include <iostream>
#include <vector>
#include <string>
#include "insert.h"

int main(){
    //Dichiarazioni generali
    //Nei vari casi useremo l'intero 9 come valore inserito, svuoteremo il vettore dopo ogni caso
    
    int val;
    int s=0;
    
    
    //Caso (a)
    std::vector<int> vettore(0);
    std::cout << "(a) " << std::endl;
    try{
    printVector(insert(vettore, 0, 9));
    }
    catch(std::string err){
        std::cout << err << std::endl;
    }
    
    vettore.clear();
    
    //Caso (b)
    std::cout << "(b) Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        vettore.resize(s+1);
        vettore.at(s) = val;
        ++s;
        std::cin >> val;
    }
    s=0;
    std::cout << std::endl;
    
    printVector(insert(vettore, 0, 9));
    
    
    vettore.clear();
    
    //Caso (c)
    
    std::cout << "(c) Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        vettore.resize(s+1);
        vettore.at(s) = val;
        ++s;
        std::cin >> val;
    }
    s=0;
    std::cout << std::endl;
    vettore.push_back(9);
    printVector(vettore);

    
    
    vettore.clear();
    
    //Caso (d)
    std::cout << "(d) Inserire valori strettamente positivi, per chiudere inserirne uno negativo: " << std::endl;
    
    std::cin >> val;
    while(val>0){
        vettore.resize(s+1);
        vettore.at(s) = val;
        ++s;
        std::cin >> val;
    }
    s=0;
    std::cout << std::endl;
    printVector(insert(vettore, 1, 9));
    
    
    vettore.clear();
    
    //Caso (e)
    std::cout << "(e) " << std::endl;
    vettore.resize(4);

    try{
    printVector(insert(vettore, 45, 9));
    
    }
    catch(std::string err){
        std::cout << err << std::endl;
    }
    
    
    
}
