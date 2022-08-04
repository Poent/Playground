#include <iostream>
#include <random> 
#include <functional>

int main(){
	
	//setup random
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> dist(0,1000);
	
	auto d100 = std::bind(dist, std::ref(gen);
	//pick one
	
	int x = 0;
	
	while(dist(gen)){
		double d = d100;
		std::cout << dist(gen) << "  " << d << std::endl;
	}
	//roll RPSLS
	
	
}