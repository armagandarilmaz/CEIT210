#include<iostream> 
#include<math.h>
using namespace std; 

int rounder(double);

int main( ) 
{ 
	// A
    cout << "ceil of 34.6 is " << ceil(34.6) << endl;
    cout << "floor of 34.6 is " << floor(34.6) << endl;
    
    // B
	cout << "ceil of 33.2 is " << ceil(-33.2) << endl;
    cout << "floor of 33.2 is " << floor(-33.2) << endl;
    
    // C & D
    cout << "round of 34.2 is " << rounder(34.2) << endl;
    cout << "round of 34.6 is " << rounder(34.6) << endl;
    cout << "round of -33.2 is " << rounder(-33.2) << endl;
    cout << "round of -33.7 is " << rounder(-33.7) << endl;
    
    return 0; 
} 

int rounder(double a){
	int b;
	b = a;
	
	if (a > 0){
		return (a - b) > 0.5 ? ceil(a) : floor(a);		
	}
	else{
		return (a - b) > -0.5 ? ceil(a) : floor(a);
	}
}
