#include <iostream>
#include  <vector>

int findDifference(std::vector<int> a, std::vector<int> b);

int main(){
	
	std::cout << findDifference({2, 6, 10}, {3, 6, 7}) << std::endl;
	
	
}


int findDifference(std::vector<int> a, std::vector<int> b) {
	
	std::cout << a[0]*a[1]*a[2] << std::endl;
	std::cout << b[0]*b[1]*b[2] << std::endl;
	int result = a[0]*a[1]*a[2]-b[0]*b[1]*b[2];
	return result < 0 ? -result : result;
	
}