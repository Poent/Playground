#include <iostream>
#include <vector>

int main(){
	std::vector<int> v1;
	v1.push_back(100);
	
	for(int i = 0; i <= 5; i++){
		v1.push_back(i);
		//v1.push_back(100); //just testing
	}
	
	std::cout << "Size: " << v1.size();
	std::cout << "\nCapacity: " << v1.capacity();
	std::cout << "\nMax_Size: " << v1.max_size();
	
	//v1.resize(4);	
	
	
	std::cout << "\nSize: " << v1.size();
	
	if(v1.empty())
		std::cout << "\nVector is empty";
	else
		std::cout << "\nVector is not Empty";
		
	std::vector<int>::iterator it = v1.begin(); //returns the index positon of the last item in the array
	
	std::cout << "\nVector begin: " << *it;
	
	it = v1.end();
	
	std::cout << "\nVector end: " << *it;
	
	
	std::cout << "\nVector Back: " << v1.back() << "\n";
	
	for(unsigned i = 0; i<v1.size(); i++){
		std::cout << v1.at(i) << " ";
	}
	
	std::cout << "\n" << v1.front() << "\n";	
	std::cout << "\n modulous test: " << 0%2;
			
}



