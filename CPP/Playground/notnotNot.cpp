#include <iostream>

bool notnotNot(int n, bool a);

int main(){
	
	std::cout << notnotNot(1, true) << std::endl;
	std::cout << notnotNot(2, false) << std::endl;
	std::cout << notnotNot(7, true) << std::endl;
	std::cout << notnotNot(7, false) << std::endl;
}


bool notnotNot(int n, bool a){
	
	return (n+a)%2;
	
}