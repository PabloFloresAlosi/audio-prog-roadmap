/*
// 3) Audio Event Input
//
// What you practice:
// - cin
// - cout
// - variables
// - input/output
//
// Objective:
// Ask the user for audio event data.
//
// Instructions:
//
// Ask the user in the console for:
// - sound name
// - volume
// - duration in seconds
//
// Then print a summary.
//
// Example:
//
// Enter sound name:
// Footstep
// Enter volume:
// 0.6
// Enter duration:
// 2
//
// Output:
//
// Sound Summary
// Name: Footstep
// Volume: 0.6
// Duration: 2 seconds
//
// Note:
//
// Use a single-word name for the sound for now.

#include <iostream>
#include <string>

int main()

{
	std::cout << "Enter Sound Name: ";
	std::string soundName{};
	std::cin >> soundName;

	std::cout << "Enter Volume: ";
	float volume{};
	std::cin >> volume;

	std::cout << "Enter Duration in seconds: ";
	int duration{};
	std::cin >> duration;

	std::cout << std::endl;

	std::cout << "===== Sound Details =====" << std::endl;
	std::cout << "Name: " << soundName << std::endl;
	std::cout << "Volume: " << volume << std::endl;
	std::cout << "Duration: " << duration << std::endl;

	return 0;

}
*/