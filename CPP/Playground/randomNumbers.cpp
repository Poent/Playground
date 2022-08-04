#include <iostream>
#include <functional>
#include <random>



int main(){

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(0.0,100.0);
	
	while(1){
	int r = dist(mt); /// setup our random point....
	int x = dist(mt); // setup the starting point!
		
	// range 
	
	int low = 0, high = 100;
	
	int jumpDist=0;
	
	std::cout << "The initial low and high values are 0 and 10 respectively." << std::endl;
	
	std::cout << "The character is starting at: " << x << std::endl;
	std::cout << "The target is starting at: " << r << std::endl;
	
	int stopper = 20;
	
		while(x != r && stopper >= 0){
			//if x is under R
			if(x < r) {
				low = x; //set lower bound
				//high = high;
				jumpDist = ( high - low ) / 2;
				x += jumpDist;
			}
			//if x is over r
			else if(x > r){
				high = x; //set upper bound
				jumpDist = ( high - low ) / 2;
				if(jumpDist){
					x -= jumpDist;	
				}else{
					x = 0;
					std::cout << "fixed" << std::endl;
				}
				std::cout << "Jump dist: " << jumpDist << std::endl;
			}
			
			std::cout << "New X pos: " << x << std::endl;
			stopper--;	
		}
		std::cout << "Match found! R = " << x << std::endl;
		std::cin.get();
	}
}
	
	

