#include <iostream>
//#include <math>

using namespace std;

int menu();
void instructions();
void draw_shape(int); 
int get_size();
char get_char(); 
void draw_triangle(int, char); 
void draw_diamond(int, char);
void draw_bottom(int, char);

int main ( ) 
{ 
	int choice;
	
	instructions(); 
	choice = menu(); 
	if(choice == 1 || choice == 2){
	}
	else{
		cout << "You requested to quit, bye \n"; 
		return 0; 
	}
	
	draw_shape(choice);
	
	return 0; 
} 

int menu(){
	int selection;
	cin >> selection;
	return selection;
}

void instructions(){
	cout << "Choose your selection:\n 0 - Exit \n 1 - Draw triangle \n 2 - Draw Diamond \n";
}

void draw_shape(int selection){
	int size = get_size();
	char chr = get_char();
	
	cout << endl;
	
	switch (selection){
		case 0: 
			
			break;
		case 1:
			draw_triangle(size, chr);
			break;
		case 2:
			draw_diamond(size, chr);
			
			break;
		default:
			cout << "Please enter valid value/n";
			instructions();
	}
}

void draw_triangle(int size, char chr){
	for (int y = 0; y < size; y++){
		int nchr = 2*y+1; // 2n + 1
		
		for(int i = 0; i < (size-y); i++){
			cout << " ";
		}
		
		for (int i = 0; i < nchr; i++){
			cout << chr;
		}
		cout << endl;
	}
}

void draw_bottom(int size, char chr){
	for (int y = size-2; y >= 0; y--){
		int nchr = 2*y+1; // 2n + 1
		
		for(int i = 0; i < (size-y); i++){
			cout << " ";
		}
		
		for (int i = 0; i < nchr; i++){
			cout << chr;
		}
		cout << endl;
	}
}

void draw_diamond(int size, char chr){
	draw_triangle(size, chr);
	draw_bottom(size, chr);
}

int get_size(){
	int size;
	cout << "Enter size of triangle: ";
	cin >> size;
	return size; 
}

char get_char(){
	char chr;
	cout << "Enter character of triangle: ";
	cin >> chr;
	return chr; 
}
