#include <iostream>
using namespace std;
int main(){
	
	//Dichiarazione
	
	double inNum,finNum;
	
	//Input
		
	cout << "Gentile utente, inserisca un numero reale: " << '\n';
	cin >> inNum;
	
	//Calcolo
	
	finNum = inNum;
	finNum = finNum / 4.9;
	finNum = finNum / 3.53;
	finNum = finNum / 6.9998;
	finNum = finNum * 4.9;
	finNum = finNum * 3.53;
	finNum = finNum * 6.9998;
	
	//Output

	if(finNum == inNum)
	cout << "Moltipicare è l'inverso di dividere " << '\n';

	else
	cout << "Moltipicare NON è l'inverso di dividere " << '\n';

}

