#include<iostream> 
using namespace std; 
int main( ) 
{ 
      int t_in_fah;
	  double t_in_cel;  //Notice that we declared these two as integers, not the best choice 
      cout << "Enter a temperature in Fahrenheit \n"; 
      cin >> t_in_fah;

      t_in_cel = static_cast<float>(5)/9*(t_in_fah - 32); 
      cout << "The temperature in Celsius is: " << t_in_cel << endl;

     return 0; 
}

