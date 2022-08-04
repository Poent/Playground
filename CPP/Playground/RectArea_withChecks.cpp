#include <iostream>

int area(int a, int b);

int main(){
	
	
	std::cout << area(5,3) << std::endl;
	std::cout << area(8,5) << std::endl;
	std::cout << area(-2,4) << std::endl;

}

int area(int a, int b){

	if(a > 0 && b >0)
			return (a*b);
			else return -1;

}