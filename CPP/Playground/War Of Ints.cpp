#include <iostream>
#include <vector>


unsigned int warOfNumbers(std::vector<int> lst){
	
	int evens = 0, odds = 0;
	
	for(int i = 0; i < lst.size(); i++){
		
		lst[i] % 2 ? evens += lst[i] : odds+= lst[i];
		
	}
	
	return evens-odds >= 0 ? evens-odds : odds-evens;
	
}

int main(){
	
	std::cout << "the difference is: " << warOfNumbers({5, 9, 45, 6, 2, 7, 34, 8, 6, 90, 5, 243});
	
}



