#include<iostream>
using namespace std;
int main() {
	
char tekst[21];
cout << "Podaj ciag znakow (max 20 znakow): ";
cin.getline(tekst, 21);

cout << "Zmodyfikowany ciag znakow: ";

for (int i = 0; i < 21; i++) {

	if (tekst[i] == 'a') {
		tekst[i] = 'o';
	}
	
	if (tekst[i] == 'A') {
		tekst[i] = 'O';	
	}
	
}
	
cout << tekst;
		
}