struct dynamic_array{
    int * store;
    unsigned int size;
    
};
#include <string>
void read_d_array(dynamic_array& d);
void print_d_array(const dynamic_array& d);
void delete_d_array(dynamic_array& d);
void create_d_array(dynamic_array &d, int s, int v);
void set(dynamic_array &d,unsigned int index, int value );
int get(const dynamic_array &d,unsigned int index);
void selectionSort(dynamic_array &d);
