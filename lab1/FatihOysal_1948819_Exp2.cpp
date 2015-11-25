#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int num1,num2;
	
	cout << "Please enter 1. integer: ";
	cin >> num1;
	cout << endl << "Please enter 2. integer: ";
	cin >> num2;
	
	int result;
	result = num1 % num2;
	
	if (result == 0)
		cout <<  endl << num1 <<" is divisible by " << num2 << endl;
	else
	cout << num1 << " is not divisible by " << num2 << endl;
	
	return 0;
}
