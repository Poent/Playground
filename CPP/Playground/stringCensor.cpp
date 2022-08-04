#include <iostream>

std::string uncensor(std::string str, std::string vowels);

int main(){
	
	std::cout << uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo");
	
}

std::string uncensor(std::string str, std::string vowels) {
	int pos = 0;
	
	for(int i = 0; i < str.size(); i++ ){
		if(str[i] == '*'){
			str[i] = vowels[pos];
			std::cout << vowels[pos] << std::endl;
			pos++;
		}
	}
//	std::cout << str;
	return str;
	
}