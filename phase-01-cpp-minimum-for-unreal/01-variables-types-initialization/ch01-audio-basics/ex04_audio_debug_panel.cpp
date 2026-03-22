/*
4) Mini Audio Debug Panel

What you practice

formatting
whitespace
cout
variables

Objective

Print a more structured block of information, similar to a debug tool.

Instructions

Display something like this:

== = AUDIO DEBUG PANEL == =
Event Name : LaserShot
Volume : 0.9
Pitch : 1.2
Looping : 0
Distance : 12

Audio connection

This already looks much closer to a real debug readout.

=========== exercise ==========

#include <iostream>
#include <string>

int main()
{
    std::string eventName{ "LaserShot" }; // Static test values (in a real system these would come from the audio engine)
    float volume{ 0.9f };
    float pitch{ 1.2f };
    bool isLooping{ false }; // Using bool as 0/1 for quick debug readability (common in engine logs)
    int distanceMeters{ 12 };

    // Simulated audio debug panel output, similar to what you'd see in a game engine tool
    std::cout << "\n=== AUDIO DEBUG PANEL ===\n\n";
    std::cout << "Event Name: " << eventName << std::endl; 
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Pitch: " << pitch << std::endl;
    std::cout << "Looping: " << isLooping << std::endl; 
    std::cout << "Distance: " << distanceMeters << std::endl;
    std::cout << "=========================" << std::endl;

    return 0;
}
*/