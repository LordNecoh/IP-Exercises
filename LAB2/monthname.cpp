#include <iostream>
using namespace std;
int main(){

    int m;
    string mese;
    bool err = false;
    cout << "Gentile utente, inserisca il numero di un mese: " << '\n';
    cin >> m;
    
    switch(m)
		{
			case 1:
			mese="Gennaio";
			break;
			case 2:
			mese="Febbraio";
			break;
			case 3:
			mese="Marzo";
			break;
			case 4:
			mese="Aprile";
			break;
			case 5:
			mese="Maggio";
			break;
			case 6:
			mese="Giugno";
			break;
			case 7:
			mese="Luglio";
			break;
			case 8:
			mese="Agosto";
			break;
			case 9:
			mese="Settembre";
			break;
			case 10:
			mese="Ottobre";
			break;
			case 11:
			mese="Novembre";
			break;
			case 12:
			mese="Dicembre";
			break;
		}
    if (m<1 || m>13){
    err = true;
    cout << "Gentile utente, mi duole informarla che il numero da lei inserito non è un mese " << '\n';
    }
    
    if(err==false)
    cout << mese << '\n';

}
