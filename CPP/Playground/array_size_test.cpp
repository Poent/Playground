#include <iostream>
#include <math.h>

float t_array[] =	
{		//postions 		           |            |      Color   	   |
  -0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,        1.0f, 0.0f, 0.0f,			  //Lower Left
   0.5f, -0.5f * float(sqrt(3)) / 3, 0.0f,        0.0f, 1.0f, 0.0f,			  //upper corner
   0.0f,  0.5f * float(sqrt(3)) * 2 / 3, 0.0f,    0.0f, 0.0f, 1.0f,		  	  //Lower Right

  -0.5f / 2, 0.5f * float(sqrt(3)) / 6, 0.0f,	  1.0f, 0.0f, 0.0f,		      //Inner Left
   0.5f / 2, 0.5f * float(sqrt(3)) / 6, 0.0f,	  0.0f, 1.0f, 0.0f,		      //Inner right
   0.0f, -0.5f * float(sqrt(3)) / 3, 0.0f,		  0.0f, 0.0f, 1.0f,			  //Inner Down
};

class TEST{		
		
public:
	TEST() {}
	
	TEST(float* array, int array_size)
	{
		a_size = sizeof(array);
		std::cout << "Value of array: " << array << std::endl;
		std::cout << "Value of array[1]: " << array[1] << std::endl;
		std::cout << "sizeof array: " << sizeof(array) << std::endl;
		std::cout << "sizeof &array: " << sizeof(&array)<< std::endl;
		std::cout << "array_size: " << array_size << std::endl;
		std::cout << "(array_size / sizeof(array[0]): " << array_size / sizeof( array[0] ) << std::endl;
		
		
	}

	int GetSize()
	{
		std::cout << "a_size: " << a_size << std::endl;
		return a_size;
	}
	
private:
	int a_size = 0;
};

int main(){
	
	std::cout << 
		"Array Size: " << sizeof(t_array) << std::endl <<
		"Float Size: " << sizeof(float) << std::endl <<
		"Count of array values: " << sizeof(t_array)/sizeof(t_array[0]) << std::endl;
	
	TEST test(t_array, sizeof(t_array));
	test.GetSize();
	
}

