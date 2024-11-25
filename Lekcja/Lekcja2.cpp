#include <iostream>
using namespace std;
int main(){

int a = 97;
cout << "0-49 punktow: niedostateczna" << endl;
cout << "50-69 punktow: dostateczna" << endl;
cout << "70-84 punktow: dobra" << endl;
cout << "85-99 punktow: bardzo dobra" << endl;
cout << "100 punktow: celujaca" << endl;

cout << "Podaj liczbe punktow:" << int a << endl;

if (a <= 49) {
	cout << "Ocena niedostateczna" << endl;
}

if ((a >= 50) && (a <= 69)) {
	cout << "Ocena dostateczna" << endl;
}

if ((a >= 70) && (a <= 84)) {
	cout << "Ocena dobra" << endl;
}
	
if ((a >= 85) && (a <= 99)) {
	cout << "Ocena bardzo dobra" << endl;
}
	
if (a == 100) {
	cout << "Ocena celujaca" << endl;
}

	
}
