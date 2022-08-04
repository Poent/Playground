#include <iostream>
#include <string>
#include <vector>

class Planet {
  public:
    double relativeGravity;
    std::string name;
};

double getWeight();

int main() {
  std::vector<Planet> planets;
  int eWeight;
  Planet Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, Neptune;

  Mercury.relativeGravity = 0.38;
  Mercury.name = "Mercury";
  planets.push_back(Mercury);

  Venus.relativeGravity = 0.91;
  Venus.name = "Venus";
  planets.push_back(Venus);

  Earth.relativeGravity = 1;
  Earth.name = "Earth";
  planets.push_back(Earth);

  Mars.relativeGravity = 0.38;
  Mars.name = "Mars";
  planets.push_back(Mars);

  Jupiter.relativeGravity = 2.34;
  Jupiter.name = "Jupiter";
  planets.push_back(Jupiter);

  Saturn.relativeGravity = 1.06;
  Saturn.name = "Saturn";
  planets.push_back(Saturn);

  Uranus.relativeGravity = 0.92;
  Uranus.name = "Uranus";
  planets.push_back(Uranus);

  Neptune.relativeGravity = 1.19;
  Neptune.name = "Neptune";
  planets.push_back(Neptune);

  eWeight = getWeight();  

  
  for ( const auto& Planet : planets){
  	std::cout << "Your weight on " << Planet.name << "is " << eWeight * Planet.relativeGravity << "\n";
  	
  }
  
  
}

double getWeight(){
  int weight = 0;
  while(weight <= 0){
	  std::cout << "Please enter your weight on earth:";
	  std::cin >> weight;
	  if(weight <= 0){
	  	std::cout << "Please enter a valid weight...\n";
	  }
	  
	std::cout << "Your weight on Earth is: " << weight << "\n";  //Debuging 
	  
  }
  return weight;
  
}