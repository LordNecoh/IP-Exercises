#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	//Dichiarazioni
	
	int a,b,c;
	
	//Input
	
	cout << "Gentile utente, inserisca tre numero interi: " << '\n';
	cin >> a >> b >> c;
	
	
	
	//Output
	
	if(a+b>c && abs(a-b) < c && a != 0 && b !=0 && c != 0)
	cout << "Sono proprio i lati di un triangolo" << '\n';
	else
	cout << "No signore, non è un triangolo" << '\n';

	


}
