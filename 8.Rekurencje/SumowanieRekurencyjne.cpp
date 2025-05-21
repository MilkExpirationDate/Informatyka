 #include<iostream>
using namespace std;

int GetNumberFromUser() {
int n;
cout << "Podaj liczbe: ";
cin >> n;	
	return n;
} 

int CalculateSumRecursive(int n) {
if (n == 1) {
	return 1;
} else {
		return n + CalculateSumRecursive(n - 1);
}

}

void DisplayResult(int f1, int f2) {
cout << "Suma liczb od 1 do " << f1 << " wynosi: " << f2;
}

int main() {	

int N, wynik;

N = GetNumberFromUser();	
wynik = CalculateSumRecursive(N);

DisplayResult(N, wynik);
}