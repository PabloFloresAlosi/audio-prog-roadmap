/*Exercise 04 — Surface Footstep System
Concepts practiced

Function parameters
Function arguments
Passing data to functions
Code readability

Goal

Simulate a basic footstep system where different audio properties are passed into a function.

Instructions

Create a function :

void playFootstep(std::string surfaceMaterial, float volume, float pitch, bool isWet, int variationIndex)

Inside the function :

Print all the received values in a clean and readable format
Treat the function as a debug output for an audio event

In main() :

	Call the function
	Pass realistic values(e.g. "Stone", 0.75f, etc.)
	Expected output(example)
	== = FOOTSTEP EVENT == =
	Surface : Stone
	Volume : 0.75
	Pitch : 1.1
	Wet : false
	Variation : 2
	======================
	Important

	This is your first exercise where :

The function receives data from outside
The values passed in main() are called arguments
The variables in the function definition are called parameters
Extra(optional)

Create a second call to the function with different values :

Example: "Grass", lower volume, different pitch

Or :

Create a simplified version :

void playSimpleFootstep(std::string surfaceMaterial, float volume)

====================== = SOLUTION ======================

*/

#include <iostream>
#include <string>

void playFootstep(std::string surfaceMaterial, float volume, float pitch, bool isWet, int variationIndex)
{
	std::cout << "=== FOOTSTEP EVENT ===" << std::endl;
	std::cout << "Surface: " << surfaceMaterial << std::endl;
	std::cout << "Volume: " << volume << std::endl;
	std::cout << "Pitch: " << pitch << std::endl;
	std::cout << "Wet: " << isWet << std::endl;
	std::cout << "Variation: " << variationIndex << std::endl;
	std::cout << "======================" << std::endl;
}

int main()
{
	playFootstep("Stone", 0.75f, 1.1f, false, 2);

	std::cout << std::endl;

	playFootstep("Grass", 0.6f, 0.95f, true, 1);

	return 0;
}