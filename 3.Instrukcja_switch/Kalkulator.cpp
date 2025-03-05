#include <iostream>
using namespace std;
int main(){

int pierwsza;
cout << "Podaj pierwsza liczbe: ";
cin >> pierwsza;

int druga;
cout << "Podaj druga liczbe: ";
cin >> druga;

char znak;
cout << "Wybierz znak dzialania (+, -, *, /): ";
cin >> znak;

switch(znak) {
	
	case '+':
		cout << "Wybrales dodawanie" << endl;
		cout << "Wynik: " << pierwsza + druga << endl;
		break;
		
	case '-':
		cout << "Wybrales odejmowanie" << endl;
		cout << "Wynik: " << pierwsza - druga << endl;
		break;
		
	case '*':
		cout << "Wybrales mnozenie" << endl;
		cout << "Wynik: " << pierwsza * druga << endl;
		break;
		
	case '/':
		cout << "Wybrales dzielenie" << endl;
		cout << "Wynik: " << pierwsza / druga << endl;
		break;
	
	default:
		cout << "Nieprawidlowy znak" << endl;
		break;		
}



}