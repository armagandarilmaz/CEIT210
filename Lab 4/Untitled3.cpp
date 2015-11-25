#include <iostream>
//#include <math>

using namespace std;

double bb_4ac();
int get_a_b_c(double&, double&, double&);

int main(){
	int i;
	
	int x = 10;
	int y = 20;
	
	cout << "The value of x: " << x << "; \nThe value of y: " << y;
	
	i = x;
	x = y;
	y = i;
	
	cout << "\nAfter switch\nThe value of x: " << x << "; \nThe value of y: " << y;
}


double bb_4ac(){
        double a, b, c;  // Coefficients of a quadratic equation
        get_a_b_c(a, b, c);

        return b*b - 4*a*c;
}

int get_a_b_c(double& a, double& b, double& c){
	cout << "Enter values: \n";
	cin >> a >> b >> c;
} 
