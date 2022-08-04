#include <iostream>
#include <vector>


std::string evenOrOdd(std::vector<int> arr);

int main(){
	
	std::cout << evenOrOdd({1,2,3});
	
	
}


std::string evenOrOdd(std::vector<int> arr) {

	//std::cout << arr.size() << std::endl;
	
	int result = 0;
	
	for(int i = 0; i < arr.size(); i++){
		result += arr[i];
		std::cout << result << std::endl;
	}
	return result%2 ? "odd" : "even";
	
}