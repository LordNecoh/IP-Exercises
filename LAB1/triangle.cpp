#include <iostream>
using namespace std;
int main() {

	//dichiarazioni
	
	float base,height,c1,c2,perimeter,area;
	
	// input
	
	
	cout << "Gentile utente, inserisca la dimensione della base del triangolo: " << '\n';
	cin >> base;
	cout << "Inserisca la dimensione dell' altezza: " << '\n';
	cin >> height;
	cout << "Inserisca la dimensione dei cateti: " << '\n';
	cin >> c1;
	cin >> c2;

	
	//calcolo
	
	area = base*height/2;
	perimeter = base + c1 + c2;
	
	
	//output
	
	
	cout << "L'area è: " << area << '\n';
	cout << "Il perimetro è: " << perimeter << '\n';


}
