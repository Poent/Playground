#include <iostream>

int getLastItem(int arr[], int length);

int main(){
	int x[] = {1,2,3};
	getLastItem(x, 3);
	
}


int getLastItem(int arr[], int length) {
	return arr[length-1];
}