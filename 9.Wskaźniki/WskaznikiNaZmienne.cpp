#include<iostream>
using namespace std;

int main() {

int a = 5, b = 10;
int *wskaznik1 = &a;	
int *wskaznik2 = &b;

cout << "Przed modyfikacja: " << endl;
cout << "a = " << a << endl;
cout << "b = " << b << endl;

cout << endl;

*wskaznik1 = *wskaznik1 + 10;
*wskaznik2 = *wskaznik2 + 10;

cout << "Po modyfikacji: " << endl;
cout << "a = " << *wskaznik1 << endl;
cout << "b = " << *wskaznik2 << endl;

}