#include<iostream>
using namespace std;
int main () {

int tablica[10];
cout << "Podaj 10 liczb  calkowitych:\n";

for (int i = 0; i < 10; i++) {

cout << "Podaj liczbe nr " << i + 1 << ": ";
cin >> tablica[i];
	
}

int max = tablica[0];

for (int i = 0; i < 10; i++) {
	
	if (tablica[i] < max) {
	max = tablica[i];	
	}	

}

cout << "Najmniejsza liczba to: " << max << endl;
	
}