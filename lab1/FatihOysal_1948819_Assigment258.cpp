#include <iostream>
#include <cmath> 
using namespace std;
int main()
{
	int star,bosluk;
    for(int i = 0; i < 5; i++)
    	{
				star = 2*i+1;
				bosluk = fabs(i-4);
				for (int j = 0; j <bosluk ;j++)
				cout << " ";
				for (int k = 0; k <star; k++)
				cout <<"*";
				cout << endl;
		}
	for(int i = 3; i > -1; i--)
			{
				star = 2*i+1;
				bosluk = fabs(4-i);
				for (int j = 0; j <bosluk ;j++)
				cout << " ";
				for (int k = 0; k <star; k++)
				cout <<"*";
				cout << endl;
			
    	}
    	
}
