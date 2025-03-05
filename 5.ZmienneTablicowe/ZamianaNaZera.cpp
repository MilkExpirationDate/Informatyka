#include<iostream>
using namespace std;
int main () {
	
int tablica[5];
cout << "Wprowadz 5 liczb calakowitych:\n";

for (int i = 0; i < 5; i++) {

cin >> tablica[i];

}
	
for (int i = 0; i < 5; i++) {
	
if (tablica[i] < 0) tablica[i] = 0;
	
}

cout <<	"Liczby ujemne zamienione na 0: ";

for (int i = 0; i < 5; i++) {
	
if (i == 4) {
cout << tablica[i]; }
else cout << tablica[i] << ", ";

}


}