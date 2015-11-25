#include <iostream>

using namespace std;

void display_it(double x, int precision);
void display_it(double x,double y,int precision);
int main ()
{
	display_it(2.222333,1.111222,3);
	return 0;
}

void display_it(double x, int precision)
{
      cout.setf(ios::fixed);
      cout.setf(ios::showpoint);
      cout.precision(precision);
      cout << x << endl;
} 

void display_it(double x,double y,int precision)
{
      cout.setf(ios::fixed);
      cout.setf(ios::showpoint);
      cout.precision(precision);
      cout << x << endl;
      cout << y << endl;
} 
