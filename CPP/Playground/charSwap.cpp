#include <iostream>

std::string doubleSwap(std::string s, char c1, char c2);

int main(){
	
	std::cout << doubleSwap("aabbccc", 'a', 'b');
	
}





std::string doubleSwap(std::string s, char c1, char c2) {

	for(int i = 0; i < s.size(); i++){
		if(s[i] == c1){
			s[i] = c2;
		}
		else if(s[i] == c2){
			s[i] = c1;
		}
	}
	return s;
	
}