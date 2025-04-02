#include<iostream>
using namespace std;

float Suma(float a, float b) {
	return a + b;
}
float Roznica(float a, float b) {
	return a - b;
}
float Iloczyn(float a, float b) {
	return a * b;
}
float Iloraz(float a, float b) {
	return a / b;
}

int main() {
	
float liczba1, liczba2, wynik;
short funkcja;

do {
	
cout << "Wybierz funkcje:" << endl;
cout << "1. Suma" << endl;
cout << "2. Roznica" << endl;
cout << "3. Iloczyn" << endl;
cout << "4. Iloraz" << endl;
cout << "0. Wyjscie" << endl;

cout << "Wybrana funkcja: " ;
cin >> funkcja;

if ((funkcja == 1) || (funkcja == 2) || (funkcja == 3) || (funkcja == 4)) {
cout << "Podaj pierwsza liczbe: ";
cin >> liczba1;
cout << "Podaj druga liczbe: ";
cin >> liczba2;
}

switch(funkcja) {
	case 1 :
			wynik = Suma(liczba1, liczba2);
			cout << "Wynik: " << wynik << endl;
			break;
	case 2 :
			wynik = Roznica(liczba1, liczba2);
			cout << "Wynik: " << wynik << endl;
			break;
	case 3 :
			wynik = Iloczyn(liczba1, liczba2);
			cout << "Wynik: " << wynik << endl;
			break;
	case 4 :
			wynik = Iloraz(liczba1, liczba2);
			cout << "Wynik: " << wynik << endl;
			break;
				
}

cout << endl;

} while (funkcja != 0);

}