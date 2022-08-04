#include <iostream>


//This is a class definition. This allows us to build components accessible through the class. 

class Rectangle{
	int width, height, rArea;
	
	public:
		Rectangle (int,int);
		void set_values (int,int);
		int area() { return width*height; }
};


//This is the 
Rectangle::Rectangle(int x, int y){
	width = x;
	height = y;
	rArea = x * y;
}




int main(){
	
	Rectangle rect[] {{2,5}, {5,5}, {10,10}};
	for(int i = 0; i < 3 ; i++ ){
		std::cout << "Area Calculation: " << rect[i].area() << std::endl;
		std::cout << "Area Value pre-calculated: " << rect[i].rArea << std::endl;
	}
	std::cout << "rect is this large: " << sizeof(rect) << std::endl;
	std::cout << "one rect is this large: " << sizeof(rect[0]) << std::endl;
	std::cout << "Which means there are this many objects in the array: " << sizeof(rect)/sizeof(rect[0]) << std::endl;
	
}
