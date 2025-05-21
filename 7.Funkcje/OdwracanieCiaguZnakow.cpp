#include<iostream>
#include<cstring>
using namespace std;

string GetTextFromUser() {
string a;
getline(cin, a);
	return a;
}

string ReverseString(string s1) {
int dlugosc = s1.length();
string s2;
for (int i = dlugosc; i >= 0; i--) {	
s2 = s2 + s1[i];	
}
	return s2;
}

void DisplayResult(string s2) {
cout << "Odwrocony ciag znakow:" << s2;		
}

int main() {
	
string s1, s2;

cout << "Podaj ciag znakow: " ;
s1 = GetTextFromUser();

s2 = ReverseString(s1);

DisplayResult(s2);
}