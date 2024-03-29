#include <iostream>
using namespace std;
int main(){
	cout << boolalpha;
	cout << "Tre è maggiore di uno = " << (3>1) << '\n';
	cout << "Quattro diviso due è minore di zero = " << ((4/2)<0) << '\n';
	cout << "Il carattere 'zero' è uguale al valore zero = " << ('0'==0) << '\n';
	cout << "Dieci mezzi è compreso fra zero escluso e dieci incluso = " << ((10/2) > 0 && (10/2) <= 10) << '\n';
	cout << "Non è vero che tre è maggiore di due e minore di uno = " << (!(3>2 && 3 < 1)) << '\n';
	cout << "Tre minore di meno cinque implica sette maggiore di zero= " << (!(3 < -5) || (7 > 0)) << '\n';

}
