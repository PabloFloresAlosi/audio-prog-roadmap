/*
8) Music Intensity Meter

What you practice
input
variables
arithmetic
expressions

Objective

Simulate music intensity based on nearby enemies.

Instructions

Ask the user for:

number of nearby enemies

Calculate:

musicIntensity = enemiesNearby * 10

Print the result.

Example

If the user enters 4, the result could be:

Music Intensity: 40

Unreal connection

This starts to resemble adaptive audio system logic, even if still simple.


========== = exercise ==========



#include <iostream>
#include <string>

int main()
{
	int enemiesNearby{0};
	float intensityMultiplier{ 10.0f };

	std::cout << "Enter the number of nearby enemies" << std::endl;
	std::cin >> enemiesNearby;

	float musicIntensity{ enemiesNearby * intensityMultiplier };

	std::cout << "\n=== MUSIC SYSTEM DEBUG ===\n";
	std::cout << "Enemies Nearby: " << enemiesNearby << std::endl;
	std::cout << "Multiplier: " << intensityMultiplier << std::endl;
	std::cout << "Final Music Intensity: " << musicIntensity << std::endl;

	return 0;

}
*/