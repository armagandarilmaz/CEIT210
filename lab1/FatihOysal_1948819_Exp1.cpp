#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int b=0,i=0,sum=0,mini=0,maxi=0;
	double avg;

		while (i<5)
		{
			i++;
			cout << "Please enter "<< i <<". number = ";
			cin >> b;
			
			if (i == 1){
				mini = b;
			}
				
			if (b < mini){
				mini = b;
			}
			
			if (b > mini){
				maxi = b;
			}
				
				
			sum = sum + b;
			avg = static_cast<double>(sum)/ 5;
		}	
		cout << std::endl << "Sum of numbers: "<< sum << std::endl;
		cout << "Average of numbers: "<< avg << std::endl;
		cout << "The lowest of numbers: "<< mini << std::endl;
		cout << "The largest of numbers: "<< maxi << std::endl;
return 0;

}
