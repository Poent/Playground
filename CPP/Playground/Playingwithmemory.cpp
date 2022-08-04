#include <iostream>

using namespace std;

int main(){
	
	int i = 10;
	int *x = &i;
	
	cout << i << endl;
	cout << &i << endl;
	cout << x << endl << endl;
	cout << "Set i to 5" << endl;
	i = 5;
	
	cout << "i = " << i << endl;
	cout << "I address = " << &i << endl;
	cout << "X: " << x << endl;
	cout << "X Address: " << &x << endl;	
	cout << "pointed to X: " << *x << endl;	
	
	int y = *i;
	
	cout << "Y = " << y << endl;
	
}