#include <iostream>

int main(){

	int a,b,c;
	std::cout << "Gentile utente, inserisca due valori interi: " << '\n';
	std::cin >> a;
	std::cin >> b;
	std::cout << "a = " << a << " b = " << b << '\n';
	c = a;
	a = b;
	b = c;
	std::cout << "a = " << a << " b = " << b << '\n';


}
