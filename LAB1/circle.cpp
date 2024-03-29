#include <iostream>
using namespace std;
int main() {

	//dichiarazioni
	
	float r,area,circ;
	const float pi = 3.14;
	// input
	
	
	cout << "Gentile utente, inserisca il raggio del cerchio: " << '\n';
	cin >> r;
	
	
	//calcolo
	
	area = static_cast<float>(pi*r*r);
	circ = static_cast<float>(r*2*pi);
	
	
	//output
	
	
	cout << "L'area è: " << area << '\n';
	cout << "La circonferenza " << circ << '\n';


}
