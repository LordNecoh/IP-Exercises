#include <iostream>

using namespace std;

int main(){
    
    int g1,g2;
    cout << "Inserire le mosse di morra cinese dei due giocatori (1 = carta, 2 = forbice, 3 = sasso): " << '\n';
    cin >> g1 >> g2;
    
    if (g1 != g2)
    {
        switch(g1)
        {
            case 1:
            
                switch(g2)
                {
                    case 3:
                    cout << "vince g1!" << '\n';
                    
                    break;
                    case 2:
                    cout << "vince g2!" << '\n';
                    
                    break;
                
                }
            
            
            break;
            
            case 3:
            
                switch(g2)
                {
                    case 2:
                    cout << "vince g1!" << '\n';
                    
                    break;
                    case 1:
                    cout << "vince g2!" << '\n';
                    
                    break;
                
                }

            break;
            
            case 2:
            
                switch(g2)
                {
                    case 1:
                    cout << "vince g1!" << '\n';
                    
                    break;
                    case 3:
                    cout << "vince g2!" << '\n';
                    
                    break;
                
                }
            
            
            break;
        
        
        
        }
    
    }    
    else
    
    cout << "Pareggio! " << '\n';






}
