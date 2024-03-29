#include <iostream>
using namespace std;
int main(){
// chiedere di inserire tre numeri interi
	cout << "Gentile utente, inserisca tre numeri interi " << '\n';
// dichiarare tre variabili a0, a1 e a2 di tipo int
	int a0,a1,a2;
// leggere a0, a1 e a2
	cin >> a0 >> a1 >> a2;
// ordinare a0, a1 e a2, ovvero:
// dichiarare una variabile intera aux inizializzata con a1
	int aux = a1;
// se a0 maggiore di a1 scambiare fra loro a0 e a1, cioe'
	if(a0>a1){
	
// - assegnare ad a1 il valore di a0, ad a0 il valore di aux e...
		a1 = a0;
		a0 = aux;
// ... ad aux il valore di a1 (a questo punto a0 <= a1==aux)
		aux = a1; }

// se a0 maggiore di a2
	if(a0>a2){
	
// - assegnare ad a1 il valore di a0, ad a0 il valore di a2 e...
		a1 = a0;
		a0 = a2;
// ... ad a2 il valore di aux
		a2 = aux; }
// altrimenti
// - se a1 maggiore di a2 scambiare fra loro a1 e a2, cioe'
	if(a1>a2){
// -- assegnare ad a1 il valore di a2, ad a2 il valore...
		a1 = a2;
// ... di aux (a questo punto a0<=a1<=a2)
		a2 = aux;
		}
// stampare la stringa "I numeri inseriti, in ordine crescente, sono: "
		cout << "I numeri inseriti, in ordine crescente, sono: ";
// stampare il valore di a0, seguito dal carattere <
		cout << a0 << "<";
// stampare il valore di a1, seguito dal carattere <
		cout << a1 << "<";
// stampare il valore di a2
		cout << a2 << '\n';
// stampare un a capo
}
