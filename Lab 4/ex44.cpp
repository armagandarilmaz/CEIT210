#include <iostream>
//#include <math>

using namespace std;

double bb_4ac();
int get_a_b_c(double&, double&, double&);

int main(){
	double cache;
	cache = bb_4ac();
	
	cout << cache;
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
