/*
9) Footstep Setup Data

What you practice
variables
naming identifiers
formatting
output

Objective

Represent footstep sound data.

Instructions

Create variables for:

surface material name
volume
pitch
whether it is wet or not
variation index

Example:

surfaceMaterial = "Stone"
footstepVolume = 0.75f
footstepPitch = 1.1f
isWet = false
variationIndex = 2

Print a clear summary.

Audio connection

This is very realistic for a footstep system.

========== = exercise ==========



#include <iostream>
#include <string>

int main()
{
	std::string surfaceMaterial{ "Stone" };
	float footstepVolume{ 0.75f };
	float footstepPitch{ 1.1f };
	bool isWet{ false };
	int variationIndex{ 2 };

	std::cout << "\n=== FOOTSTEP DEBUG ===\n";
	std::cout << "Surface Material Name: " << surfaceMaterial << std::endl;
	std::cout << "Footstep Volume: " << footstepVolume << std::endl;
	std::cout << "Footstep Pitch: " << footstepPitch << std::endl;
	std::cout << "Wet: " << isWet << std::endl;
	std::cout << "Variations: " << variationIndex << std::endl;

	return 0;

}
*/