#include <iostream>
#include <string>
using namespace std;

int main(){
    int curr_value;
    int sum = 0,quantity = 0;
    float mean;
    bool fine=false;
    string yOn;
    
    cout << "Inserire numeri di cui fare la media"<<endl;
    while(!fine){
        cout << "Inserire valore reale n." <<quantity+1<<" :"<<endl;
        cin >> curr_value;
    
        if (curr_value!=-1)
        
      
        {
            ++quantity;
            sum += curr_value;
        }
        
        cout << "Vuole continuare? " <<endl;
        cin >> yOn;
        
        if (yOn == "no" || yOn == "No" || yOn == "NO"){
            fine = true;
        }
        
    }
    
    if (quantity<1)
        cout << "Non ha inserito nessun numero" << endl;
    else {
        mean = static_cast<float>(sum)/quantity;
        cout << "La medià è di: " << mean << endl;
    }
    
    
}
