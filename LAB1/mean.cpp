#include <iostream>
using namespace std;
int main() {

	//dichiarazioni
	
	float a,b,m;
	
	
	// input
	
	
	cout << "Gentile utente, inserisca due numeri: " << '\n';
	cin >> a >> b;
	
	
	//calcolo
	
	m = static_cast<float>((a+b)/2);
	
	
	//output
	
	
	cout << "la media è di: " << m << '\n';



}
