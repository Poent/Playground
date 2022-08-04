#include <iostream>
#include <string>

std::string StringEvenOdd(int a);

int main(){
/*
	std::cout << StringEvenOdd(5) << std::endl;
	std::cout << StringEvenOdd(4) << std::endl;
	std::cout << StringEvenOdd(400) << std::endl;
	//*/
	for(int i = 0; i < 10; i++)
		std::cout << i << " " << StringEvenOdd(i) << std::endl;
	
}



std::string StringEvenOdd(int a){
	
	return a%2 == 0 ? "even": "odd";
	
}