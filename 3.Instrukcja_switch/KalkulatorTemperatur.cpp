#include <iostream>
using namespace std;
int main(){

int temperatura;

cout << "Podaj temperature w Celsjuszach: " ;
cin >> temperatura;

char jednostka;
cout << "Podaj jednostke temperatury: " ;
cin >> jednostka;

switch(jednostka) {
	
	case 'K':
		cout << "Wybrales Kelviny" << endl;
		cout << "Temperatura w Kelvinach: " << (temperatura + 273.15) << endl;
		break;
		
	case 'F':
		cout << "Wybrales Farenheity" << endl;
		cout << "Temperatura w Farenheitach: " << (temperatura * 9/5 + 32) << endl;
		break;
			
}



}