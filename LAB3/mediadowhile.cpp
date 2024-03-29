#include <iostream>

using namespace std;

int main(){
    int curr_value= 0,sum = 0,quantity = 0;
    float mean;
    
    cout << "Inserire '-1' per uscire"<<endl;
    while(curr_value!=-1){
        cout << "Inserire valore reale n." <<quantity+1<<" :"<<endl;
        cin >> curr_value;
    
        if (curr_value!=-1)
        
      
        {
            ++quantity;
            sum += curr_value;
        }
        
        
        
    }
    
    if (quantity<1)
        cout << "Non ha inserito nessun numero" << endl;
    else {
        mean = static_cast<float>(sum)/quantity;
        cout << "La medià è di: " << mean << endl;
    }
    
    
}
