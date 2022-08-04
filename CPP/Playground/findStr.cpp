#include <iostream>
#include <string>

std::string bomb(std::string str);

int main(){
	

	std::cout << bomb("oh yeah? where is the bomb?") << std::endl;
	std::cout << bomb("oh yeah? where is the bOMb?") << std::endl;
	std::cout << bomb("oh yeah? BOMB bom mom bob!") << std::endl;
	std::cout << bomb("mob bob boum") << std::endl;
	
	
	
}


std::string bomb(std::string str) {

	std::string bomb = "BOMB";
	char c = ::toupper(str[0]);
//	return std::string(1, c);
	
	for(int i = 0; i < str.size(); i++ ){
		str[i] = ::toupper(str[i]);
		//std::cout << str[i];
	}
	
	//std::cout << std::endl;
	
	if(str.find( bomb)!= std::string::npos){
		return "Duck!!!";
	}
	else
		return "There is no bomb, relax.";
		
}