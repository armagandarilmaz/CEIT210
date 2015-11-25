
#include<iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main(){
	int code;
	
	cout << "List of paycodes; \n -- 1 = Manager \n -- 2 = Hourly Worker \n -- 3 = Commission Worker \n -- 4 = Piece Worker)\n -- 9 = End of Program \n\n\nEnter paycode : ";
	
	cin >> code;
	
	while(code != 9) {
		
		int salary;
		int whour;
		
		int pay;
		
		switch(code) {
			case 1:
         		cout << " * Enter Manager's Weekly Salary: ";
          		cin >> salary;
          		
          		cout << "** The manager's pay is " << salary << endl;
          		break;
          	case 2: 
          		cout << " * Enter Worker's Hourly Salary: ";
          		cin >> salary;
          		
          		cout << "\n ** Enter Work Hour: ";
          		cin >> whour;
          		
          		if (whour > 40){
          			pay = (40.0 * salary) + (whour - 40.0) * salary * 1.5;	
				}
				else{
					pay = whour * salary;
				}
				
				cout << " ** The Workers's pay is " << pay << endl;
				break;
			case 3: 
				cout << " * Enter Comission Worker Weekly Sales: ";
				cin >> salary;
				
				pay = salary * .057 + 250;
         		
				cout << " ** Commission Worker's Pay is " << pay << endl;
				break;
			case 4:
				int pieces;
				
				cout << " * Enter Number of Pieces of Piece Worker: ";
				cin >> pieces;
				
				cout << " ** Enter Salary Per Piece: ";
				cin >> salary;
				
				pay = pieces * salary;
				cout << " ** Piece worker's pay is " << pay << endl;
            break;
		}
		
		cout << "\n ----\n\nEnter Paycode: ";
		cin >> code;
	}
	
	return 0;
}

