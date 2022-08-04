#include <iostream>

std::string nTablesPlusOne(int n);

int main(){
	
	nTablesPlusOne(7);
	
}





std::string nTablesPlusOne(int n) {
	
	std::string returnString;
	
	for(int i = 1; i <= 10; i++){
		returnString += std::to_string(n*i+1);
		if(i < 10){ 
			returnString += ","; 
		}
	}
	std::cout << returnString;
	return returnString;
}