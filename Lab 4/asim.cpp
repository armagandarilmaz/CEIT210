#include <iostream>

using namespace std;

void display_it(double, int);
void display_it(double, int, double);

int main(){
	display_it(10, 1);
	display_it(10, 1, 20);
	return (0);
}

void display_it(double x, int precision){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
	cout << x << endl;
} 

void display_it(double x, int precision, double y){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(precision);
	cout << y << endl;
} 
