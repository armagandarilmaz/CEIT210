#include <iostream>
#include <sstream>  
#include <conio.h>
#include <math.h>
using namespace std;

int a;
stringstream b;

int main(){
	
	while (a < 10000 or a > 99999){
		cout << "Enter five digit number: ";
		cin >> a;		
	}

	cout << "Spaced: ";
	for (int i = 4; i >= 0; i--){
		b << int((a / pow(10,i))) << " ";
		a %= int(pow(10, i)); 
	}
	cout << b.str();
	
	getch();
	return 0;
}
