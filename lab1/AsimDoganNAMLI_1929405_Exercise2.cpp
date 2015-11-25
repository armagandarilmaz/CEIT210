#include <iostream>
#include <conio.h>

using namespace std;

int i1 = 0;
int i2 = 0;

int main(){
	
	while (i1 <= 0 || i2 <= 0){
		cout << "Enter two integers: ";
		cin >> i1 >> i2;
		
		if (i1 > 0 && i2 > 0){
			int modd =  i1 % i2;
			if (modd == 0){
			cout << i1 << " is multiple of " << i2;
			}
			else{
				cout << i1 << " is not multiple of " << i2;
			}
		}
		else {
			cout << "Please give numbers different than 0" << endl;
		}
		
	}
	
	cout << endl;
	getch();
	return 0;
}
