#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int i1,i2;

int main(){
	
	while (i1 < 10000 || i1 > 99999){
		cout << "Enter five digit number: ";
		cin >> i1;		
	}
	
	i2 = i1;
	
	/* Lab da bizden 5 haneli say�n�n tersten bast�r�lmas� istendi... */
	cout << "\nInverse of given number is       : ";
	for (int n = 0; n < 5; n++){
		cout << int(i2 / (pow(10,n))) % 10;
	}
	cout << endl;
	
	/* Lab d�k�man�nda ise verilen 5 haneli say�n�n bo�luklu bast�r�lmas� isteniyor, output b�l�m�nde de g�sterilmi�...*/
	cout << "Spaced version of given number is: ";
	for (int n = 4; n >= 0; n--){
		cout << int(i2 / (pow(10,n))) % 10 << " ";
	}
	cout << endl;
	
	getch();
	return 0;
}
