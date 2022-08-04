#include <iostream>
#include <string>
#include <iterator>

std::string stringSplit(std::string s);


int main(){
	
	std::cout << stringSplit("mubashir");
	
}


std::string stringSplit(std::string s){
	
	
	
	std::string::iterator sIter = s.begin(); 									//create an iterator at the start of the string
	std::cout << "position: " << distance(s.begin(), sIter) << 
		std::endl<< "Contents at position: " << *sIter << std::endl; 			//output contents at it's postion
	sIter++; 																	//move forward "++"
	std::cout << "position: " << distance(s.begin(), sIter) << 
		std::endl<< "Contents at position: " << *sIter << std::endl; 			//Output the new iteration postiion [1]
	//std::cout << &sIter;														//Output the address just for fun. 
	
	
	std::string fHalf;
	std::string sHalf;
	
	
	sIter = s.begin(); 															//Reset it's postiion to run the function...
	
	
	while(distance(sIter, s.end())){
		std::cout << *sIter << " ";
		sIter++;
	}
	
	std::cout << std::endl;
	
	sIter = s.begin(); 	
	
	while(distance(sIter, s.end())){
		if(distance(sIter, s.begin()) %2){
			sHalf += *sIter;
		}
		else 
			fHalf += *sIter;
			
		std::cout << *sIter << " ";
		std::cout << distance(sIter, s.end())%2 << std::endl;
		sIter++;
	}	
		
	return (fHalf + " " + sHalf);
//	*/
	
	
}