#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int x,y,z,sum,average,product,smallest,largest;
	cout<<"Number 1 : ";
	cin>>x;
	cout<<"Number 2 : ";
	cin>>y;
	cout<<"Number 3 : ";
	cin>>z;
	
	sum=(x+y+z);
	average=(x+y+z)/3;
	product=x*y*z;
	if(x>y){
		if(x>z){
			largest=x;	
		}
	}else if(y>z){
		largest=y;
	}else{
		largest=z;
	}
	if(x<y){
		if(x<z){
			smallest=x;	
		}
	}else if(y<z){
		smallest=y;
	}else{
		smallest=z;
	}
	
	cout<<"Sum :"<<sum<<endl<<"Average :"<<average<<endl<<"Product :"<<product<<endl<<"Smallest:"<<smallest<<endl<<"Largest :"<<largest<<endl;
	
return 0;
getch(); 
} 
