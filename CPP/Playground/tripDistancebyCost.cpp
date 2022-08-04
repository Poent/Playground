#include <iostream>

int tripDistance(int num);


/*=============
//Trip cost based on distance traveled. 
//Travel cost is 3$ for the first mile, 
//and 2$ for every mile after that...
//=============*/

int main(){
	
	std::cout << tripDistance(3) << std::endl;
	std::cout << tripDistance(5) << std::endl;
	std::cout << tripDistance(9) << std::endl;
	std::cout << tripDistance(15) << std::endl;
	std::cout << tripDistance(99) << std::endl;
	
}



int tripDistance(int num){
	
	std::cout << (num -1) /2 << std::endl;
	return num <= 3 ? 1 : (num-3)/2+1;
	
}