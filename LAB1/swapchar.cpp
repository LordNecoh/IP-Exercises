#include <iostream>

int main() {

	char a,b,c;
	std::cout << "Gentile utente, inserisca due caratteri: " << '\n';
	std::cin >> a;
	std::cin >> b;
	std::cout << "a = " << a << " b = " << b << '\n';
	c = a;
	a = b;
	b = c;
	std::cout << "a = " << a << " b = " << b << '\n';



}
