#include <iostream>
using namespace std;
int main(){

int N;
cout << "Podaj liczbe N: " ;
cin >> N ;

int wynik = 0;

for ( int i = 1; i <= N; i++)
{
	wynik = wynik + i;
}

cout << "Suma liczb od 1 do " << N << ": " << wynik << endl;



}