//Vowel Fixer

#include <iostream>
#include <string>


std::string uncensor(std::string inString, std::string vowels);


int main() {
	std::cout << uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo");
	
}

std::string uncensor(std::string inString, std::string vowels){
	
	int vowelIndex;
	std::string uncensoredString;
	std::cout << "Censored string: " << inString << "\n";
	std::cout << "String length is: " << inString.length() << "\n";
	std::cout << "Starting uncensor task...\n";
	
	for (int i = 0; i < inString.length(); i++){
		if(inString[i] != '*'){
			uncensoredString += inString[i];
		} 
		else{
			uncensoredString += vowels[vowelIndex];
			vowelIndex++;
		}
	}
	
	return uncensoredString;
}