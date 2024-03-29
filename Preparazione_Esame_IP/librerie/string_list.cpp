#include "string_list.h"

struct cell_impl{
    std::string head;
    cell_impl* next;
};

void headInsert(list& l, std::string s){
    list aux = new cell;
    aux->head = s;
    aux->next = l;
    l = aux;
}

void read(list& l){
    std::cout<< "Quanti valori desidera inserire?" << std::endl;
    unsigned int n;
    std::cin >> n;
    for(unsigned int i=n; i>0; --i){
        std::cout << "Inserisca la stringa: ";
        std::string temp;
        std::cin >> temp;
        headInsert(l, temp);
    }
}

void print(const list l){
    list aux = l;
    while(aux != nullptr){
        std::cout << aux->head << std::endl;
        aux = aux->next;
    }
}

std::string getElem(const list l, int index){
    list aux = l;
    int count = 0;
    while(aux != nullptr){
        if(count == index)
            return aux->head;
        ++count;
        aux=aux->next;
    }
    return "Index is not present in the list.";
}

void insertAt(const list l, int index, std::string val){
    list cur = l;
    int count = 0;
    while(cur != nullptr){
        if(count == (index-1) || cur->next==nullptr){
            list aux = new cell;
            aux->head = val;
            aux->next = cur->next;
            cur->next = aux;
            return;
        }    
        ++count;
        cur=cur->next;
    } 
}

void deleteAt(list& l, int index){
    list cur = l;
    int count = 0;
    while(cur != nullptr){
        if(count == (index-1)){
            list aux = cur->next;
            if(cur->next==nullptr) return;
            cur->next = cur->next->next;
            delete aux;
            return;
        }    
        ++count;
        cur=cur->next;
    }
}






