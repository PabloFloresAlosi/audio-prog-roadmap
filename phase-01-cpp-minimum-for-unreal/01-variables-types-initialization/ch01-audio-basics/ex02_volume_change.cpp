/*
2) Volume Change Simulation

What you practice:
- assignment vs initialization
- literals
- expressions
- operators

Objective:
Simulate how volume changes during gameplay.

Instructions:
Initialize volume to 1.0f
Print the value
Change it to 0.7f
Print the value
Change it to 0.35f
Print the final value

Extra:
Add comments explaining what initialization is and what reassignment is.

Unreal connection:
This is the kind of value you would control for music, SFX, distance attenuation, ducking, etc.

=========== exercise ==========

#include <iostream>
#include <string>

int main()
{
	float volume{ 1.0f }; // Initialization: variable is created and assigned its first value
	std::cout << volume << std::endl;

	volume = 0.7f; // Reassignment: updating the value of an existing variable
	std::cout << volume << std::endl;

	volume = 0.35f; // Reassignment again
	std::cout << volume << std::endl;

	return 0;

}

*/
