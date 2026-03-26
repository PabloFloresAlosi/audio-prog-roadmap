/* Exercise 01 — Audio Boot Sequence

Concepts practiced

Function declaration
Function calls
Execution order

Goal
Simulate the initialization sequence of an audio system in a video game.

Instructions
Create the following functions :

printEngineStart()
printLoadBanks()
printAudioReady()

Each function should print a different message related to the audio system startup.

Call all functions from main() in the correct order.

Expected output(example)

Starting audio engine...
Loading sound banks...
Audio system ready.

Extra(optional)
Add a fourth function :

printAudioReady()

======================= SOLUTION =======================

#include <iostream>

// Simulates the initialization of the audio engine
void printEngineStart() // void cause we are not expecting any return value
{
	std::cout << "Starting audio engine..." << std::endl;
}

void printLoadBanks()
{
	std::cout << "Loading sound banks..." << std::endl;
}

void printAudioStatus()
{
	std::cout << "Audio system ok" << std::endl;
}

void printAudioReady()
{
	std::cout << "Audio is READY." << std::endl;
}

// Entry point of the program
// Simulates a basic audio engine startup sequence

int main()
{
	printEngineStart();
	printLoadBanks();
	printAudioStatus();
	printAudioReady();

	return 0;
	
}

*/