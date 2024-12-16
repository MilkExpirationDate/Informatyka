#include <iostream>
using namespace std;
int main(){


int waga;
cout << "Podaj wage (w kg): ";
cin >> waga;

double wzrost;
cout << "Podaj wzrost (w metrach): ";
cin >> wzrost;

double BMI;
BMI = ( waga / (wzrost * wzrost));
cout << "Twoje BMI wynosi: " << BMI << endl;

if ( BMI < 16.0 ) cout << "Wyglodzenie" << endl;

if (( BMI >= 16.0 ) && ( BMI <= 16.99 )) cout << "Wychudzenie" << endl;

if (( BMI >= 17.0 ) && ( BMI <= 18.49 )) cout << "Niedowaga" << endl;

if (( BMI >= 18.5 ) && ( BMI <= 24.99 )) cout << "Odpowiednia masa ciala" << endl;

if (( BMI >= 25.0 ) && ( BMI <= 29.99 )) cout << "Nadwaga" << endl;

if ( BMI >= 30.0 ) cout << "Otylosc" << endl;





}