#include<iostream>
using namespace std;
void swap (int, int);
int main()
{
	int a, b;
    cout << "Enter number a and b :"<< endl;
	cin >> a >> b;
	cout << "Before swap a:" << a << " b:" << b << endl;
	swap(a,b);

    return 0;
}

void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "After swap a:" << a << " b:" << b << endl;
}
