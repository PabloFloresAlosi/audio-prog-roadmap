/*
7) Pitch Calculator

What you practice
literals
operators
expressions
assignment

Objective

Calculate a final pitch value.

Instructions

Create these variables:

float basePitch
float bonusPitch
float finalPitch

Perform an operation like:

finalPitch = basePitch + bonusPitch;

Then print all values.

Extra

Create a second version:

finalPitch = (basePitch + bonusPitch) * 0.5f;

Audio connection

Pitch and volume are fundamental in gameplay sound design.


#include <iostream>
#include <string>

int main()
{
	float basePitch{ 3.0f }; // Base pitch value of the sound (e.g. original playback rate)
	float bonusPitch{ 9.0f }; // Additional pitch modifier (e.g. gameplay effect, power-up, variation)
	float finalPitch{ (basePitch + bonusPitch) * 0.5f }; // Final pitch calculation

	// Output all pitch values to simulate an audio debug panel
	std::cout << "Base Pitch: " << basePitch << std::endl;
	std::cout << "Bonus Pitch: " << bonusPitch << std::endl;
	std::cout << "Final Pitch: " << finalPitch << std::endl;

	return 0;

}
*/