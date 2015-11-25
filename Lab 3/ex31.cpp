#include<iostream>
#include <math.h>
using namespace std;

int main(void)
{
	int i = 0, p = 1;
	int a = 2, b = 4;
	 
	p = pow(a,b); // computing 2^4
	cout << a << " to the power of " << b << " is = " << p << endl;
	
	i = 0;
	p = 1;
	a = 3, b = 3;
	
	p = pow(a,b);// computing 3^3 
	cout << a << " to the power of " << b << " is = " << p << endl;
	
	i = 0;
	p = 1;
	a = 5, b = 4;
	
	p = pow(a,b);// computing 5^4
	cout << a << " to the power of " << b << " is = " << p << endl;
	
	return 0;
} 
