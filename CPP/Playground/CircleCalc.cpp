#include <iostream>

#define _USING_MATH_DEFINES

#include <math.h>



int main() {
	
	std::cout.precision(3);
		
	int segments = 15;
	
	double segmentDegrees = 360/segments;
	double SegmentRadians = segmentDegrees * ( M_PI / 180 );
	
	
	int radius = 1;
	float* CircleArray = new float[segments * 2];

	//calculate angles based on size
	std::cout << "Slices: "  << segments << std::endl;
	std::cout << "Segment Degrees: " << segmentDegrees << std::endl;
	std::cout << "Segment Radians: " << SegmentRadians << std::endl;

	
	for (int i = 0; i <= segments; i++ ) 
	{
		
		double x = radius * sin(i * SegmentRadians);
		double y = radius * cos(i * SegmentRadians);
		
		CircleArray[i * 2] = x;
		CircleArray[i * 2 + 1] = y;

	}
	
	for(int i = 0; i < segments*2/sizeof(CircleArray[0]); i += 2)
	{	
		std::cout << "X: " << CircleArray[i] << " Y: " << CircleArray[i + 1] << std::endl;
	}
	
}