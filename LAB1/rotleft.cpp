#include <iostream>
using namespace std;
int main() {

	//dichiarazioni
	
	float a,b,c,d;
	
	// input
	
	
	cout << "Gentile utente, inserisca tre numeri decimali: " << '\n';
	cin >> a;
	cin >> b;
	cin >> c;

	
	cout << "a = " << a << " b = " << b << " c = " << c << '\n';
	
	//calcolo
	
	
	d = a;
	a = b;
	b = c;
	c = d;
	
	//output
	
	cout << "a = " << a << " b = " << b << " c = " << c << '\n';



}
