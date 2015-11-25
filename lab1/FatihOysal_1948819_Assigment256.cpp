#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	int paycode, 
	    Manager    = 0,     
	    HourWorker = 0,     
        ComWorker  = 0,     
	    PiWorker   = 0;    
 	double salary;
	 
    cout << "-----------------------------------------------------"
         << "---------------\n"
		 << "Paycodes (1=Manager,2=HourlyWorker,3=CommissionWorker"
		 << ",4=PieceWorker)\n"
	     << "                  ( -1 To End Program )              "
		 << "\n-----------------------------------------------------"
		 << "---------------\n"
		 << "\nEnter paycode : ";
     cin >> paycode;
   
         while( paycode != -1 ) {
         
			 switch( paycode ) {
        
         case 1: //Manager
         Manager++;
         cout << "Manager Selected." << endl;
         cout << "Enter Weekly Salary: ";
          cin >> salary;
         cout << "Manager's pay is " << fixed << setprecision( 2 ) 
              << salary << "\n" << endl;
         break;
         
         case 2: //Hourly Worker
         double wage;
         int hours;
         HourWorker++;
         cout << "Hourly worker Selected." << endl;
         cout << "Enter the hourly salary: ";
          cin >> wage;
         cout << "Enter the total hours worked: ";
          cin >> hours;
         if ( hours <= 40 )
            salary = hours * wage;
         else
            salary = 40.0 * wage + ( hours - 40 ) * wage * 1.5;
            
         cout << "Hourly worker's pay is " << fixed << setprecision( 2 ) 
              << salary << "\n" << endl;
         break;
         
         case 3: //Commission Worker
         int sales;
         ComWorker++;
         cout << "Commission Worker Selected." << endl;
         cout << "Enter gross weekly sales: ";
          cin >> sales;
         salary = sales * .057 + 250;
         cout << "Commission worker's pay is " << fixed << setprecision( 2 ) 
              << salary << "\n" << endl;
         break;
         
         case 4: //PieceWorker
         int pieces, wagePerPiece;
         PiWorker++;
         cout << "Piece worker Selected." << endl;
         cout << "Enter number of pieces: ";
          cin >> pieces;
         cout << "Enter wage per piece: ";
          cin >> wagePerPiece;
         salary = pieces * wagePerPiece;
         cout << "Piece worker's pay is " << fixed << setprecision( 2 ) 
              << salary << "\n" << endl;
         break;
      }
      
    cout<< "-----------------------------------------------------"
        << "---------------\n"
	    << "Paycodes (1=Manager,2=HourlyWorker,3=CommissionWorker"
	    << ",4=PieceWorker)\n"
        << "                  ( -1 To End Program )              "
	    << "\n-----------------------------------------------------"
	    << "---------------\n"
	    << "\nEnter paycode : ";
    cin >> paycode;
   }
   
    cout << "\t-------------------------------------------------"
	     << "\n\t| Number of Employees paid         : "
	     << Manager + HourWorker + ComWorker + PiWorker 
	     << "\t\t|\n\t| Number of Managers paid          : " 
         << Manager 
         << "\t\t|\n\t| Number of Hourly Workers paid    : "
         << HourWorker 
         << "\t\t|\n\t| Number of Commission Workers paid: "
	     << ComWorker 
         << "\t\t|\n\t| Number of Piece Workers paid     : "
         << PiWorker 
		 << "\t\t|\n\t-------------------------------------------------"
         << endl;
	      
	      return 0;
}




