#include <string>
#include <iostream>

struct myvector{
    int size;
    int capacity;
    int * store;
};

// Stringhe di errore
std::string full = "Il vector è già pieno";
std::string empty = "Il vector è vuoto";
std::string out_of_range = "Indice out of range";
std::string negativeCapacity = "Capacity negativa";
std::string incosistent = "Vettore non consistente";
//Funzioni

void create(myvector& v, int capacity){
    if(capacity < 0) throw negativeCapacity;
     v.capacity = capacity;
     v.size = 0;
     v.store = new int[capacity];
}

bool looks_consistent(const myvector& v){
    if(v.store !=nullptr && (v.size>=0 && v.size <= v.capacity) && v.capacity >= 0) return true;
    return false;
}

void push_back(myvector &v, int x){
    if(!looks_consistent(v)) throw incosistent;
    if(v.size == v.capacity) throw full;
    if (v.size < v.capacity){
        v.store[v.size] = x;
        v.size += 1;
    }
    
}

int pop_back(myvector &v){
    if(!looks_consistent(v)) throw incosistent;
    if (v.size == 0) throw empty;
    v.size -= 1;
    return v.store[v.size];
}

void set(myvector& v, int value, int index){
    if(!looks_consistent(v)) throw incosistent;
    if(index < 0 || index>=v.size) throw out_of_range;
    v.store[index] = value;
}

void stampaVettore(const myvector& v){
    if(!looks_consistent(v)) throw incosistent;
    for(int i=0; i<v.size; ++i){
        std::cout << v.store[i] << std::endl;
    }
    std::cout << std::endl;
}

int get(myvector &v, int index){
    if(!looks_consistent(v)) throw incosistent;
    if(index < 0 || index>=v.size) throw out_of_range;
    return v.store[index];
}

void destroy(myvector& v){
    if(!looks_consistent(v)) throw incosistent;
    delete[] v.store;
    v.capacity = 0;
    v.size = 0;
}

void resize(myvector& v, int new_capacity){
    if(!looks_consistent(v)) throw incosistent;
    if(new_capacity < 0) throw negativeCapacity;
    
    int *p = new int[new_capacity];
    if(v.size <= new_capacity){
        for(int i=0; i<v.size; ++i){
            p[i] = v.store[i];
        }
    }
    else{
        for(int i=0; i<new_capacity; ++i){
            p[i] = v.store[i];
        }
        v.size = new_capacity;
    }
    delete[] v.store;
    v.store = p;
    v.capacity = new_capacity;
}

void safe_push_back(myvector &v, int x){
    if(!looks_consistent(v)) throw incosistent;
    try{
        push_back(v, x);
    }
    catch(std::string full){
        resize(v, v.capacity*2);
        push_back(v, x);
    }
}



void swapInt (int &x, int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

void BubbleSort(myvector &v){
    if(!looks_consistent(v)) throw incosistent;
    for (int i=0;i<v.size; i++) {
        for (int j=0; j<v.size-1-i; j++)
            if (v.store[j]>v.store[j+1]) {
                swapInt(v.store[j],v.store[j+1]);
            }
 
        }
}

