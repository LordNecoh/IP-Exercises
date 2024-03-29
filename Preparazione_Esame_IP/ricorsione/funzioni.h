#include <iostream>
#include <string>
struct cell{
    int head;
    cell * next;
};
typedef cell* list;

int fact(const int& n);
int coeffBin(const int& n, const int& k);
int fibonacci(const int& n);
//int MCD(const int&m, const int& n);
bool is_in(const list& l, int x);
int lenght(const list &l);
void listInsert(list& l, int x);
bool rec_insertElemInOrder(list&l, int x);
bool rec_removeElemInOrder(list&l, int x);
void printList(const list&l);
bool invertList(list &start, list &l, list &inv);
