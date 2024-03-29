#include <iostream>
using namespace std;
int main(){
	
	//Dichiarazioni
	
	double a,b,c,dep;
	
	//Input
	
	cout << "Gentile utente, inserisca tre numeri reali: " << '\n';
	cin >> a >> b >>c;
	//Calcolo
	
	if(b < a){
		dep = a;
		a = b;
		b = dep;
	}
	if(c < b){
		if(c < a){
		dep = b;
		b = a;
		a = c;
		c = dep;
		}
		else{
		b = dep;
		b = c;
		c = dep;
		
		}
	
	}
	
	
	//Output
	
	cout << c << " >= "<< b << " >= "<< a << '\n';
	


	


}
