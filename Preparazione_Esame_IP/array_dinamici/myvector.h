
struct myvector{
    int size;
    int capacity;
    int * store;
};

void create(myvector& v, int capacity);
void push_back(myvector &v, int x);
int pop_back(myvector &v);
void set(myvector& v, int value, int index);
void stampaVettore(const myvector& v);
int get(myvector &v, int index);
void destroy(myvector& v);
void resize(myvector& v, int new_capacity);
void safe_push_back(myvector &v, int x);
bool looks_consistent(const myvector& v);
void BubbleSort(myvector &v);
void swapInt (int &x, int &y);
