#include<iostream>
using namespace std;

int GetNumberFromUser() {
int n;
cout << "Podaj liczbe elementow: ";
cin >> n;	
	return n;	
}

int CalculateFibonacciRecursive(int a) {
if (a == 1 || a == 2) {
	return 1;
} else {
	return CalculateFibonacciRecursive(a - 1) + CalculateFibonacciRecursive(a - 2);
}

}

void DisplayFibonacciSequence(int a) {
cout << "Ciag Fibonacciego: ";
	
for (int i = 1; i <= a; i++) {
cout << CalculateFibonacciRecursive(i);
if (i == a) {
return;
} else {
cout << ", ";
}
}

}

int main() {
	
int N, wynik;

N = GetNumberFromUser();
wynik = CalculateFibonacciRecursive(N);
DisplayFibonacciSequence(N);
	
}