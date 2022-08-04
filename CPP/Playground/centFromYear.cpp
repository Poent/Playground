#include <iostream>

int centuryFromYear(int year);

int main(){
	
	std::cout << centuryFromYear(2020) << std::endl;
	std::cout << centuryFromYear(200) << std::endl;
	std::cout << centuryFromYear(2005) << std::endl;
	std::cout << centuryFromYear(1700) << std::endl;
	std::cout << centuryFromYear(1705) << std::endl;

	
for(int i = 0; i < 10; i++){
	std::cout << i << std::endl;
}
	
}

int centuryFromYear(int year) {
//	std::cout << year/100 << std::endl;
//	std::cout << year%100 << std::endl;
	
	return year%100 ? year/100+1 : year/100;
	
}


