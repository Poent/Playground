#include <iostream>

int strMatchBy2char(std::string a, std::string b);

int main(){
	
	std::cout << strMatchBy2char("jjcAAzz", "jjBAAz") << std::endl;
	std::cout << strMatchBy2char("ABcd", "ABcD") << std::endl;
	std::cout << strMatchBy2char("edabit", "ed") << std::endl;
	std::cout << strMatchBy2char("ABc", "Ajc") << std::endl;
	
	
}

int strMatchBy2char(std::string a, std::string b) {
	
	int counter = 0;
	int posA = 0;
	int posB = 0;
	
	if(a == "" || b == ""){
		return 0;
	}
	
	while(a[posA] != 0 and b[posA]!= 0){
		if(a[posA] == b[posA] && a[posA+1] == b[posA+1] && a[posA+1] != 0 && b[posA+1] != 0 ){
			counter++;
			std::cout << "Match! - " << a[posA] << b[posA] << " " << a[posA+1] << b[posA+1] << std::endl;
		}
		posA++;
	}
	
	
	std::cout << "Counter: " << counter << std::endl;
	
	return counter;
	
}