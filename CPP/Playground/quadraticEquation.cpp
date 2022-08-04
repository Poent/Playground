#include <iostream>
#include <math.h>

int quadraticEq(int a, int b, int c);


int main(){
	
	std::cout << quadraticEq(1,2,-3) << std::endl;
	std::cout << quadraticEq(2,-7,3) << std::endl;
	std::cout << quadraticEq(1,-12,-28) << std::endl;
	
	
}

int quadraticEq(int a, int b, int c){
		double result;
//		std::cout << "a: " << a << " b: " << b << " c: " << c << std::endl;
//		std::cout << "-b: " << -b << std::endl;
//		std::cout << "b^2: " << pow(b,2) << std::endl;
//		std::cout << "4*a*c: " << 4*a*c << std::endl;
//		std::cout << "sqrtf(B^2 - 4ac): " << sqrt(pow(b,2) - (4*a*c))<< std::endl;
		//result = (-b+sqrtf(pow(b,2)-(4*a*c)))/2*a;
		result = (-b+(sqrt(pow(b,2) - (4*a*c))))/(2*a);
		
		//std::cout << result << std::endl;
		return (-b+(sqrt(pow(b,2) - (4*a*c))))/(2*a);
	
}