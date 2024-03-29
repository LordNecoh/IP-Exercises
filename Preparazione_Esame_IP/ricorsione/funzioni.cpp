#include <iostream>
#include <string>

std::string negativeNumber = "Numero Negativo";
std::string err = "Qualcosa è andato storto";

struct cell{
    int head;
    cell * next;
};
typedef cell* list;


int fact(const int& n){
    if (n<0) throw negativeNumber;
    if (n==0) return 1;
    return n * fact(n-1);
}

int coeffBin(const int& n, const int& k){
    if(k < 0 || n < 0 || k > n) throw err;
    if(n==k || k==0) return 1;
    return (coeffBin(n-1, k-1) + coeffBin(n-1, k));
}

int fibonacci(const int& n){
    if(n<0) throw err;
    if(n==0 || n==1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

/* int MCD(const int&m, const int& n){
    if(m == n) return m;
    if(m > n) return MCD(m-n, n);
    if(n > m) return MCD(m, n-m);

}
*/

void listInsert(list& l, int x){
    list aux = new cell;
    aux ->head = x;
    aux ->next = l;
    l = aux;
}

bool is_in(const list& l, int x){
    if(l==nullptr) return false;
    if(l->head == x) return true;
    return is_in(l->next, x);
    
}

int lenght(const list &l){
    if(l==nullptr) return 0;
    return 1+lenght(l->next);
}

bool rec_insertElemInOrder(list&l, int x){
    if(l==nullptr) return false;
    if((l->head) == x) return false;
    if((l->head) > x){
        list aux = new cell;
        aux ->head = x;
        aux ->next = l;
        l = aux;
        return true;
    }
    return rec_insertElemInOrder(l->next, x);
}

bool rec_removeElemInOrder(list&l, int x){
    if(l==nullptr) return false;
    if((l->head) == x){
        list aux = l;
        l = l->next;
        delete aux;
        aux = nullptr;
        return true;
    }
    return rec_removeElemInOrder(l->next, x);
}

bool printList(const list&l){
    if(l==nullptr) return 0;
    std::cout << l->head << std::endl;
    return printList(l->next);
}

bool invertList(list &start, list &l, list &inv){
    
    std::cout << "------------" << std::endl;
    std::cout << "Start:"<< std::endl;
    printList(start);
    std::cout << "------------" << std::endl;
    std::cout << std::endl;
    
    if(l == nullptr) return true;
    if(l->next == nullptr){
        inv = l;
        return true;
    }
    if(l->next->next == nullptr){
        inv = l->next;
        std::cout << "INV:"<< std::endl;
        printList(inv);
        std::cout << std::endl;
        l->next = nullptr;
        return invertList(start, start, inv->next);
    }
    return invertList(start, l->next, inv);
}



