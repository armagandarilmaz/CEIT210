#include <iostream>
#include <conio.h>

using namespace std;

int i1;

int sum = 0;
int mini = 0;
int maxi = 0;

int main(){
	cout << "Enter three number:" << endl;
	
	for (int i = 0; i < 3; i++){
		
		cin >> i1;
		sum += i1;
		
		mini = i == 0 ? i1 : mini; 
		
		if (i1 < mini){
			mini = i1;
		}
		
		if (i1 > maxi){
			maxi = i1;
		}
	}
	
	cout << "\nThe sum of numbers: " << sum << endl;
	cout << "The avarage of numbers: " << sum / 5 << endl; 
	cout << "The minimum number is: " << mini << endl;
	cout << "The maximum number is: " << maxi << endl; 
	
	
	getch();
	return 0;
}
