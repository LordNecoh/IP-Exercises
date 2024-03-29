#include "funzioni.h"

int main(){
    // 14.1 
    /*
    int n;
    std::cin >> n;
    std::cout << fact(n) << std::endl;
    */
    
    //14.2
    /*
    int n,k;
    std::cin >> n;
    std::cin >> k;
    try{
        std::cout << coeffBin(n,k) << std::endl;
    }
    catch(std::string err){
        std::cout << err << std::endl;
    }
    */
    
    // 14.3
    /*
    int n;
    std::cin >> n;
    try{
        std::cout << fibonacci(n) << std::endl;
    }
    catch(std::string err){
        std::cout << err << std::endl;
    }
    */
    
    //14.4
    /*
    int n,k;
    std::cin >> n;
    std::cin >> k;
    
    std::cout << MCD(n,k) << std::endl;
    */
    
    //14.5
    /*
    list lista;
    listInsert(lista);
    std::cout << is_in(lista, 5) << std::endl;
    std::cout << is_in(lista, 3) << std::endl;
    */
    
    //14.6
    /*
    list lista=nullptr;
    std::cout << lenght(lista) << std::endl;
    listInsert(lista, 0);
    std::cout << lenght(lista) << std::endl;
    listInsert(lista, 0);
    listInsert(lista, 0);
    std::cout << lenght(lista) << std::endl;
    */
    
    //14.7
    /*
    list lista=nullptr;
    listInsert(lista, 6);
    listInsert(lista, 4);
    listInsert(lista, 2);
    listInsert(lista, 0);
    
    std::cout << rec_insertElemInOrder(lista, -5) << std::endl;
    std::cout << rec_insertElemInOrder(lista, 1) << std::endl;
    std::cout << rec_insertElemInOrder(lista, 8) << std::endl;
    std::cout << rec_insertElemInOrder(lista, 4) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    printList(lista);
    */
    
    //14.8
    /*
    list lista=nullptr;
    listInsert(lista, 6);
    listInsert(lista, 4);
    listInsert(lista, 2);
    listInsert(lista, 0);
    printList(lista);
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << rec_removeElemInOrder(lista, 1) << std::endl;
    std::cout << rec_removeElemInOrder(lista, 4) << std::endl;
    std::cout << rec_removeElemInOrder(lista, 1) << std::endl;
    std::cout << rec_removeElemInOrder(lista, 4) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    printList(lista);
    */
    
    //14.9
    list lista=nullptr;
    listInsert(lista, 3);
    listInsert(lista, 2);
    listInsert(lista, 1);
    listInsert(lista, 0);
    
    printList(lista);
    std::cout << std::endl;
    std::cout << std::endl;
    list aux;
    invertList(lista, lista, aux);
    printList(aux);

}

