
#include <iostream>
#include <string>

char firstPlace(std::string road);

int main(){
	
	std::cout << firstPlace("==a====S===ew===PA=S=dq==q==");
	
}


char firstPlace(std::string road) {
	
	std::cout << "road size: " << road.size() << std::endl;

	
	
	for(int i = road.size() - 1; i > 0; i--){
		if( road.at(i) != '='){
			return road.at(i);
		}
	}
}

