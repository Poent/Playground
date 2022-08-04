/*

I decided to approach this course with an expanded challenge. I wanted to
define use a class called "Student" that would contain the variables required
to fulfill the course requirements. The idea here is that we could
easily make an object for however many students there are, and loop through
the questions for every student getting sorted. 

AKA:
We could make a Student class to store all students in the class (haha).

If I were to revisit this I would probably look at moving each question to a function.
I believe there is some room left to optimize there...

Anyways, this is what I came up with. I have not implemented the code to 
define a list of multiple students or the code to loop through that list. 
But anyone could do so with minimal effort. 



*/




#include <iostream>
#include <string>

// lets make student a class. As a class, we could define any number of students
// and have each one of them answer the questions for the test. 
class Student{
  public:		// open up with class variables
    std::string name, house;	// Strings to store student name and house 
    int g=0, h=0, r=0, s=0;		// Variables to store the allocated house points
    int a1, a2, a3, a4;			// Variables to store question answers. 
    
    // This function is used at the end of the quiz to calculate which house got the most points
    // Once the house is identified, we set the house to the student and return the result. 
    std::string getHouse(void){
    	int max = 0;
		if (g > max) {
			max = g;
			house = "Gryffindor";
		}
		if (h > max) {
			max = h;
			house = "Hufflepuff";
		}
		if (r > max) {
			max = r;
			house = "Ravenclaw";
		}
		if (s > max) {
			max = s;
			house = "Slytherin";
		}
		return house;
	}
};

// Declare our function prototypes. I like to define the function after the main() function
// for readability - specifically when writing single-file code. 
void scoreCounter(Student * s, std::string a);
void scoreCounter(Student * s, int a);



int main(){
	//declair our first student
	Student student1;
	
  	std::cout << "The Sorting Had Quiz!" << std::endl;
  	std::cout << "Enter your name! " << std::endl << ">> ";
  	std::cin >> student1.name;

	//question 1
  	while(1){
		std::cout << "Enter a number between 1-4: "; 
		std::cin >> student1.a1;
	  	if(student1.a1 > 0 && student1.a1 < 5){
	  		scoreCounter(&student1, student1.a1);
			break;	
		} else {
			std::cout << "Invalid Input." << std::endl;
		}	
	}
	
	//question 2
	while(1){
		std::cout << "Do you prefer Dawn or Dusk? " << std::endl << "1) Dawn \n2) Dusk" << std::endl << ">> ";
		std::cin >> student1.a2;
		
		if(student1.a2 == 1){
			scoreCounter(&student1, "gryffindor");
			scoreCounter(&student1, "ravenclaw");
			break;
		} else if (student1.a2 == 2){
			scoreCounter(&student1, "hufflepuff");
			scoreCounter(&student1, "slytherin");
			break;
		} else {
			std::cout << "Invalid Input." << std::endl;
		}
	}
	
	//question 3
  	while(1){
		std::cout << "Q3) Which kind of instrument most pleases your ear? " << std::endl <<
		"	1) The violin" << std::endl <<
		"	2) The trumpet" << std::endl <<
		"	3) The piano" << std::endl <<
		"	4) The drum" << std::endl <<
		" >> "; 
		std::cin >> student1.a3;
		if(student1.a3 == 1){
			scoreCounter(&student1, "slytherin");
			break;
		} else if (student1.a2 == 2){
			scoreCounter(&student1, "hufflepuff");
			break;
		} else if (student1.a2 == 3){
			scoreCounter(&student1, "ravenclaw");
			break;
		} else if (student1.a2 == 4){
			scoreCounter(&student1, "gryffindor");
			break;
		}else {
			std::cout << "Invalid Input." << std::endl;
		}	
	}
	
	//question 4
  	while(1){
		std::cout << 
		"Q4) Which road tempts you most? " << std::endl <<
		"	1) The wide, sunny grassy lane" << std::endl <<
		"	2) The narrow, dark, lantern-lit alley" << std::endl <<
		"	3) The twisting, leaf-strewn path through woods" << std::endl <<
		"	4) The cobbled street lined (ancient buildings)" << std::endl <<
		" >> "; 
		std::cin >> student1.a4;
		
		
		if(student1.a2 == 1){
			scoreCounter(&student1, "hufflepuff");
			break;
		} else if (student1.a2 == 2){
			scoreCounter(&student1, "slytherin");
			break;
		} else if (student1.a2 == 3){
			scoreCounter(&student1, "gryffindor");
			break;
		} else if (student1.a2 == 4){
			scoreCounter(&student1, "ravenclaw");
			break;
		}else {
			std::cout << "Invalid Input." << std::endl;
		}	
	}
	
	/* start this line with // for debugging...
	std::cout << "gryffindor: " << student1.g << std::endl;
	std::cout << "hufflepuff: " << student1.h << std::endl;
	std::cout << "ravenclaw: " << student1.r << std::endl;
	std::cout << "slytherin: " << student1.s << std::endl;
	//*/
	
	std::cout << "Student house is... " << student1.getHouse() << "!!" << std::endl;
}
//End of our Main() function


// function to increment the object values depending on answer results.
//I mostly wanted to play with updating object variables when referenced by a pointer. 
void scoreCounter(Student * s, std::string a){
    
    if(a == "hufflepuff"){
		s->h++;
	}
	else if(a == "slytherin"){ //slyther
	    s->s++;
	}
	else if(a == "ravenclaw"){
	    s->r++; 
	} else if(a == "gryffindor") {
	    s->g++;
	}
	else {
	    std::cout << "Invalid Input." << std::endl;
	}
}

// This is the overloaded function for when an interger is passed instead of a string.
// This is actually what I started with, but had trouble keeping track of scoring
// when only a number was a reference to the house getting points...
// This could actually be enturely removed by re-writing question 1 (line 72)
// but I had this code already written and that seemed like a lot of work... 
//
// ... plus it was a good excuse to play with overloaded functions. 
void scoreCounter(Student * s, int a){
	std::cout << "IT'S OUR OVERLOADED FUNCTION!" << std::endl;
    switch(a){
	    case 1: //Hufflpuff
	      s->h++;
	      break;
	    case 2: //slyther
	      s->s++;
	      break;
	    case 3: //raven
	      s->r++; 
	      break;
	    case 4: //gryffindor
	      s->g++;
	      break ;
	    default:
	      std::cout << "Invalid Input." << std::endl;
  }
}


