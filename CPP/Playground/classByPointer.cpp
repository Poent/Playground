#include <iostream>


class MyClass{
	public:
		int x=0;
};

void myFunction(MyClass * fclass);
void myFunction(MyClass fclass);


int main(){
	
	MyClass class1;
	
	class1.x = 10;
	
	std::cout << "class1: " << class1.x << std::endl;
	
	myFunction(class1);
	
	std::cout << "class1: " << class1.x << std::endl;
	
	std::cout << "class1 address: " << & class1 << std::endl;
	
	myFunction(&class1);
	
	std::cout << "class1: " << class1.x << std::endl;
	
		
}


void myFunction(MyClass * fclass){
	fclass->x += 5;
	
}

void myFunction(MyClass fclass){
	fclass.x += 5;
}