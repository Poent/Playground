#include <iostream>
#include <vector>

std::vector<int> filterString(std::string txt);

int main(){
	
	std::vector<int> typeCounter= filterString("*$(#Mu12bas43hiR%@*!");
	
	std::cout << "Counter Results: [";
	for(int i = 0; i < typeCounter.size(); i++){
		std::cout << typeCounter[i];
		if(i<3)
			std::cout << ",";
		else
			std::cout << "]\n";
	}
}


std::vector<int> filterString(std::string txt) {
	
	std::vector<int> counter = {0,0,0,0}; //upper, lower, numbers and symbols
	
	for(int i = 0; i < txt.size(); i++){
		int x = (int)txt[i];
		std::cout << char(x);
	}
	std::cout << std::endl;
	
	for(int i = 0; i < txt.size(); i++){
		int x = (int)txt[i];
		
	//	std::cout << "Character: " << txt[i] << " Dec: " << x << std::endl;
		
		if(x >= 65 && x <= 90){        //upper
			counter[0]++;
		}
		else if(x >= 97 && x <= 122){  //lower
			counter[1]++;
		}
		else if(x >= 48 && x <= 57){	  //numbers
			counter[2]++;
		}
		else{   								  //symbols (everything else)
			counter[3]++;
		}
		
		
	}
	
	return counter;
	
}