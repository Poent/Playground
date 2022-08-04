// This program will play a game of rock paper lizard wizard spock.

//live long and prosper

#include <iostream>
#include <random>
#include <string>
#include <vector>
#include <map>

using std::pair;

std::string rplss(int input);

int random();

class Rpsls {
	public:
};
//setup a "better" random number generator.


int main() {


	std::cout << "Test random(): " << random() << std::endl;
	
	
	std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";
	
	std::cout << "1) Rock\n";
	std::cout << "2) Paper\n";
	std::cout << "3) Scissor\n";
	std::cout << "4) Lizard\n";
	std::cout << "5) Spock\n";
	
	std::cout << "shoot! ";
	
	int uInput = 0;
	std::cin >> uInput;
	
	std::cout << rplss(uInput);
  


}

int random(){
	
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(0,4);
	
	return dist(mt);
	

}


std::string rplss(int input){
	std::string result;
	
	int ai = random();
	
	
	
	
	
	Return result;
    
    
    
}

