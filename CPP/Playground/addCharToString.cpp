#include <iostream>
#include <string>

std::string add(char a, std::string str);

int main(){
	
	std::cout << add('#',"Bobs Bananas") << std::endl;
	
	
}



std::string add(char a, std::string str){
	
//	std::cout << "char: " << a << std::endl;
//	std::cout << "String: " << str << std::endl;
	
	for(int i = 0; i < str.size(); i++ ){
		//std::cout << str[i] << std::endl;
		if(str[i] == ' ')
			str[i] = a;
	}
	
	return str;
	
	
}