# include <iostream>
#include <math.h>

using namespace std;

double hypotenuse (double, double);

int main (){
    double leng_hypot,side1,side2;
    
    cout << "Triangle\tSide 1\tSide 2\tHypotenuse\n";
    cout << "       1\t3.0     4.0     "<< hypotenuse(3.0, 4.0) << endl;
    cout << "       2\t5.0     12.0    "<< hypotenuse(5.0, 12.0) << endl;
    cout << "       3\t8.0     15.0    "<< hypotenuse(8.0, 15.0) << endl;
	
    system("pause");
    return (0);
}

double hypotenuse (double side1,double side2){
    return sqrt((side1*side1) + (side2*side2));
}
