#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x1, x2;
	double delta = 0.0;	
	int a,b,c;
	
	cout << "Please enter a,b and c value: ";
	cin >> a >> b >> c;
	
	if (a == 0){
		cout << "There is no root.";
	}
	else{
		delta = (pow(b,2)) - (4 * a * c);
		if (delta >= 0){
			delta = sqrt(delta);
			x1 = (-b + delta) / (2 * a);
			cout << "x1: " << x1 << endl; 
			x2 = (-b - delta) / (2 * a);
			cout << "x2: " << x2;
		}
		else{
			cout << "There is no real roots.";	
		}
	}
	return 0;
}
