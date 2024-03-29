#include <iostream>
using namespace std;
int main() {

	//dichiarazioni
	
	int h,min,res;
	
	// input
	
	
	cout << "Gentile utente, Gentile utente, inserisca un numero di ore: " << '\n';
	cin >> h;
	if(h<0 or h>23){
		cout << "Dev'essere compreso tra 0 e 23 " << '\n';
		}
	else{	
		cout << "Gentile utente, inserisca un numero di minuti: " << '\n';
		cin >> min;
		if(min<0 or min>59){
			cout << "Dev'essere compreso tra 0 e 59 " << '\n';
			}
		else{
			
	
	//calcolo
	
	res = h * 60 + min;
	
	
	//output
	
	
	cout << "Il tempo convertito in minuti è:  " << res << '\n';

		}	
}
}
