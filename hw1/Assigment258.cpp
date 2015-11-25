#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	for (int y = 1; y < 10; y++) {
		
		int nstar = (2 * abs(abs(y-5) - 4)) + 1; 
		int nspace = abs(5 - y);

		for (int i = 0; i < nspace; i++) {
			cout << " ";
		}
		
		for (int i = 0; i < nstar; i++){
			cout << "*";
		}
		
		cout << endl;
	}
	
	getch();
	
	return (0);
}
