#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	int h,m;
    string ora,minuti;
	string circa="";
	cout << "Inserire Ore e Minuti:" << endl;
	cin >> h >> m;
	
	if((h<1||h>12)||(m<0||m>59))
	cout << "Codice Errore: -1" << endl;
	else
	{
	    if(m!=15 && m!=0 && m!=30 && m!=45){
		    if (m<15){
			    circa="circa ";
			    m = 0;
			    }
		    else	if (m<30){
			            circa="circa ";
			            m = 15;
			        }
			        else
			            if (m<45){
			            circa = "circa ";
			            m = 30;
			            }
			            else if (m<60){
			                circa = "circa ";
			                m = 45;
			                }
        }
    
		switch(h)
		{
			case 1:
			ora="una";
			break;
			case 2:
			ora="due";
			break;
			case 3:
			ora="tre";
			break;
			case 4:
			ora="quattro";
			break;
			case 5:
			ora="cinque";
			break;
			case 6:
			ora="sei";
			break;
			case 7:
			ora="sette";
			break;
			case 8:
			ora="otto";
			break;
			case 9:
			ora="nove";
			break;
			case 10:
			ora="dieci";
			break;
			case 11:
			ora="undici";
			break;
			case 12:
			ora="dodici";
			break;
		}
		switch(m){
			case 0:
			minuti = " ";
			break;
			case 15:
			minuti = " e un quarto ";
			case 30:
			minuti = " e mezza ";
			case 45:
			minuti = " e tre quarti ";
		}
		
		cout << "Sono " << circa << "le " << ora << minuti << '\n';
		}
	}




