#include <iostream>

using namespace std;

int main(){
    
   // stampare la stringa "Inserire un numero positivo: "
   cout << "Inserire un numero positivo: " << endl;
// dichiarare una variabile intera n
    int n;
// leggere n
    cin >> n;
// se n è minore di zero
    if (n<0){
// - stampare "Avevo detto positivo!"

        cout << "Avevo detto postivo! " << endl;  
// - uscire dal programma ritornando codice di errore 7    
        return 7; 
    }


    
// dichiarare una variabile intera F inizializzata a n
    int f = n;
/* iterare su una variabile intera i inizializzata a n-1 e decrescente di 1...
... finché i è maggiore di 1
    

- assegnare a F il prodotto di F e i
*/

    for(int i=(n-1);i>1; --i){
        f = f*i;
    }
    
    
    
// se F è zero
    if (f==0)
        
// - stampare "Il fattoriale di 0 è 1"
        cout << "Il fattoriale di 0 è 1" << endl;
// altrimenti
    else
// - stampare "Il fattoriale di " seguito da n, seguito da " è " seguito da F
        cout << "Il fattoriale di " << n << " è " << f << endl;
    
}
