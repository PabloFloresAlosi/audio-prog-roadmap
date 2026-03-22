/*// 1) Audio Status Console
//
// What you practice:
// - statements
// - comments
// - variables
// - initialization
// - cout
//
// Objective:
// Display the basic status of a sound in the console.
//
// Instructions:
// Create variables for:
// - sound name
// - volume
// - whether it is playing
// - number of active sounds
//
// Then print them to the console.
//
// Suggested variables:
// std::string soundName
// float volume
// bool isPlaying
// int activeSounds
//
// Expected output:
//
// Audio Event: Explosion
// Volume: 0.8
// Is Playing: 1
// Active Sounds: 3
//
// Audio connection:
// This is essentially a mini audio debug panel.

RESULT

#include <iostream>
#include <string>

int main()
{
	// Basic audio event data
	std::string soundName{ "Explosion" };
	float volume{ 0.8f };
	bool isPlaying{ true };
	int activeSounds{ 3 };

	// Print audio statis to the console
	std::cout << "=== AUDIO STATUS ===" << std::endl;
	std::cout << "Audio Event: " << soundName << std::endl;
	std::cout << "Volume: " << volume << std::endl;
	std::cout << "Is Playing: " << isPlaying << std::endl;
	std::cout << "Active Sounds: " << activeSounds << std::endl;
	std::cout << "====================" << std::endl;

	return 0;
}
*/