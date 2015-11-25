#include <iomanip>
#include <iostream>

using namespace std;

float FahToCel(int);
float CelToFah(int);

int main(void) {
	int i;
	
	cout << setw(32) << "Celcius to Fahrenheit:  |" << "  Fahrenheit to Celcius:\n";
	cout << setw(32) << "------------------------|" << "------------------------\n";
	
	for (i = 0; i <= 180; i++){
		if(i <= 100){
			cout << setw(3) << i << " Celcius = " << setw(4) << setprecision(3) << CelToFah(i) <<  " Fahrenheit  |";
			cout << "  " << setw(3) << i + 32 << " Fahrenheit = " << setw(4) << setprecision(3) << FahToCel(i + 32) <<  " Celcius\n";
		}
		else{
			cout << setw(32) << "|" << "  " << setw(3) << i + 32 << " Fahrenheit = " << setw(4) << setprecision(3) << FahToCel(i + 32) <<  " Celcius\n";
		}
	}

	
	system("pause");
	return (0);
}

float FahToCel(int degree){
	return (degree - 32)/1.8;
}

float CelToFah(int degree){
	return degree*1.8 + 32;
}
