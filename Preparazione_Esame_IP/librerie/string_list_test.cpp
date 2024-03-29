#include "string_list.h"

int main(){
    //Inizializzazioni comuni
    
    list lista = nullptr;
    
    //Test headInsert e print
    /*

    headInsert(lista, "Primo");
    headInsert(lista, "Secondo");
    print(lista);
    */
    //Test read, GetElem, InsertAt, DeleteAt
    
    read(lista);
    std::cout << std::endl;
    print(lista);
    std::cout << "------" << std::endl;
    std::cout << getElem(lista,1) << std::endl;;
    std::cout << std::endl;
    insertAt(lista, 2, "Jimmy");
    print(lista);
    std::cout << "------" << std::endl;
    deleteAt(lista, 2);
    print(lista);
    
    
    
    
}
