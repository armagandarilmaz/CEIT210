#include<iostream> 
#include<cmath> 
using namespace std; 

const double PI = 3.14159;  // This variable is defined globally, known to all functions in this program as PI 
const double conversion = 0.3937; // This is the Cm to inch conversion factor 

double cylinder(double r);  // computes cross section area 
double cylinder(double r, double h);  // computes side area 
double total_area_cylinder(double cross,double side); // total area
double volume(double r, double h); // cylinder volume
double volume(double r); // sphere volume
double surface_sphere(double r); // sphere surface area
int main(void) 
{ 
	double h, r;  //variables local to the main function 
	int oror;
	cout << "Which one do you want to make an operation ?" << endl;
	cout << " For Cylinder = [1] - For Sphere  = [2]: ";
	cin >> oror;
	
	if (oror==1)
	  	{
		  	cout << "Enter the radius and the height of the cylinder in Cm <Enter> "; 
	        cin >> r >> h; 
	        cout << endl;
	        cout << "Before I do any computation or call any function, I want to let you know that \n"; 
	      	cout << "you have entered r = " << r << " and h = " << h << "." << endl; 
	      	cout << "I am planning to use inch, thus in the first function, I will convert r, and " << endl; 
	      	cout << "in the second one I will convert h \n"; 
	      	
	      	cout << "The total area of the cylinder is " << total_area_cylinder(cylinder(r), cylinder(r, h)) << "  inch-sqr" << endl; 
	      	cout << "The volume of the cylinder is " << volume(r, h) << "  inch-sqr" << endl; 
	        cout << "The side area of the cylinder is " << cylinder(r, h) << " inch-sqr \n\n"; 
		}
	else
		{
		  	cout << "Enter the radius of the sphere in Cm <Enter> "; 	
	        cin >> r; 
	        cout << endl;
	        cout << "Before I do any computation or call any function, I want to let you know that \n"; 
	      	cout << "you have entered r = " << r << "." << endl; 
	      	cout << "I am planning to use inch, thus in the first function, I will convert r \n" << endl;
			  
			cout << "The surface area of the sphere is " << surface_sphere(r) << "  inch-sqr" << endl; 
	      	cout << "The volume of the sphere is " << volume(r) << "  inch-sqr" << endl; 
		} 
	
	return 0; 
} 

double surface_sphere(double r) 
{ 
	double vol;
	r = r * conversion; 
	vol = PI*pow(r,3);  
	return vol;
}

double volume(double r) 
{ 
	double vol; // calculating for sphere volume
	r = r * conversion; 
	vol = PI*pow(r,3);  
	return vol;
}

double volume(double r, double h) 
{ 
	double vol; // calculating for cylinder volume
	h = h * conversion; 
	r = r * conversion; 
	vol = (PI*pow(r,2))*h; 
	return vol;
}

double total_area_cylinder(double cross, double side) 
{ 
	double total;
	total = cross + side;  
	return total;
}

double cylinder(double r, double h) 
{ 
	double area; //Side_area
	h = h * conversion; 
	r = r * conversion;  
	area = 2*PI*r*h; 
	return area; 
} 

double cylinder(double r) 
{ 
	//Cross secion area 
	r = r * conversion;  // converting r to inch 
	return 2*PI*pow(r,2); 
} 

