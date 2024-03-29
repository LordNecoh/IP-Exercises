#include <iostream>
using namespace std;
int main(){
	
	//Dichiarazioni
	
	int anno;
	bool no = false;
	
	//Input
	
	
	cout << "Gentile utente, inserisca un anno: " << '\n';
	cin >> anno;


	//Calcolo
	if(anno % 4 == 0 ){
		if(anno % 100 == 0 ){
			if(anno%400!=0){
			no = true;
			}
		}
	}
	else{
		no = true;
	}

	
	//Output
	
	if(no)
	cout << "No, mi dispiace, non è bisestile, non lo è proprio, dannazione" << '\n';
	else
	cout << "Siiii, è bisestile!!! DAJJEE!" << '\n';
	
	

	


}
