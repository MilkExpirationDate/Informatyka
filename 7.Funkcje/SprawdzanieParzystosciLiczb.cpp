#include<iostream>
using namespace std;

bool Rezultat(int a) {
if (a % 2 == 0) {
	return true;
} else {
	return false;
}

}

int main() {
	
int liczba, wynik;

cout << "Podaj liczbe calkowita: ";
cin >> liczba;

wynik = Rezultat(liczba);
	
if (wynik == true) {
	
cout << "Liczba " << liczba << " jest parzysta";

} else {
	
cout << "Liczba " << liczba << " jest nieparzysta";

}
	
}