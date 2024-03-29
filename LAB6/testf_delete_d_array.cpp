#include <iostream>
using namespace std;
#include "d_array.h"

int main(){
    dynamic_array a;
    read_d_array(a);
    try{
    delete_d_array(a);
    delete_d_array(a);
    }
    catch(string alreadyEmpty){
        cout << alreadyEmpty << endl;
    }
}
