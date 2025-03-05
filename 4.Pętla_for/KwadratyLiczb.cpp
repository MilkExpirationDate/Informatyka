#include <iostream>
using namespace std;
int main(){
	
int N;
cout << "Podaj liczbe N: " ;
cin >> N ;

int wynik = 0;
cout << "Kwadraty liczby od 1 do " << N << ": " << endl;

for ( int i = 1; i <= N; i++ ) {
	wynik = i * i ;
	cout << i << "^2 = " << wynik << endl;
}


	
	
}