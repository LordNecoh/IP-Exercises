#include <iostream>
#include <string>
using namespace std;
struct dynamic_array{
    int * store;
    unsigned int size;
    
};

void read_d_array(dynamic_array& d){
    int s = -1;
    while(s<=0){
        cout << "Inserire la dimensione del vettore" << endl;
        cin >> s;
    }
    d.size = s;
    d.store = new int[s];
    for(int i=0; i<s; ++i){
        cout << "Inserire un valore: ";
        cin >> d.store[i];
    }
    
    
}

void print_d_array(const dynamic_array& d){
    int *pointer = d.store;
    for(unsigned int i=0; i<d.size; ++i){
        cout << *(pointer+i) << "\t" ;
        
    }
    cout << endl;
}

void delete_d_array(dynamic_array& d){
    string alreadyEmpty="Array già vuoto ";
    if(d.size>0){
        delete[] d.store;
        d.store = nullptr;
        d.size = 0;
    }
    else throw alreadyEmpty;
}

void create_d_array(dynamic_array &d, int s, int v){
    if(d.size != 0) delete_d_array(d);
    d.size = s;
    d.store = new int[s];
    for(int i=0; i<s; ++i){
        d.store[i] = v;
    }

}

void set(dynamic_array &d,unsigned int index, int value ){
    string outOfRangeIndex = "Indice out-of-range ";
    if(index >= d.size || index < 0) throw outOfRangeIndex ;
    d.store[index] = value;
    
}


int get(const dynamic_array &d,unsigned int index){
    string outOfRangeIndex = "Indice out-of-range ";
    if(index >= d.size || index < 0) throw outOfRangeIndex ;
    return d.store[index];
}

void selectionSort(dynamic_array &d){
    int location;
    int temp;
    for (unsigned int f=1;f<(d.size); ++f) {
        if (d.store[f]<d.store[f-1])
        {
            temp=d.store[f];
            location=f;
            do
            {
                d.store[location]=d.store[location-1];
                location--;
            }
            while (location>0 && d.store[location-1] > temp);
            d.store[location]=temp;
        }
        
    }

}



