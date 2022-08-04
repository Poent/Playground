#include <iostream>
#include <vector>

using namespace std;

int letterCounter(vector<vector<char>> arr, char c);

int main(){
	
	cout <<	letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'D') << endl;
	
}


int letterCounter(vector<vector<char>> arr, char c) {
	
	int counter = 0;
	
	for(int y = 0; y < arr.size(); y++){
		for(int x = 0; x < arr[y].size(); x++){
			if( arr[y][x] == c ){
				counter++;
			}
		}
	}
	
	return counter;
	
}