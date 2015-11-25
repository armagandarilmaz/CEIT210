#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,result; 
	
	cout << "  a To The Power of b Calculate \n   *** \t *** \t *** \t ***\n"; 
    while(true) 
    { 
		cout << "\nPlease enter a number <Enter>: "; 
		cin >> a;
		
		cout << "Please enter b number <Enter>: "; 
		cin >> b;
		
		result = pow (a,b);
		cout << "- The value of " << a << " to the power of " << b << " is " << result << endl;
    } 


    return 0; 

} 
