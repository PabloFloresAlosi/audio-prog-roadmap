/*
10) Full Audio Event Summary

What you practice
everything from Chapter 1
statements
comments
variables
initialization
assignment
cin
cout
expressions
formatting

Objective

Create a complete mini program.

Instructions

Ask the user for:

event name
base volume
base pitch
number of simultaneous sounds

Calculate:

mixLoad = volume * activeSounds

Then print a well-formatted summary.

Suggested structure

=== AUDIO EVENT SUMMARY ===
Event Name: AmbienceWind
Volume: 0.5
Pitch: 1.0
Active Sounds: 4
Estimated Mix Load: 2

Audio connection

This is the best way to close Chapter 1 because it combines everything and already feels like a simple tool.

========== = exercise ==========



#include <iostream>
#include <string>

int main()
{
    // INPUT

    std::string eventName{};
    float volume{};
    float pitch{};
    int activeSounds{};

    std::cout << "Enter event name: " << std::endl;
    std::cin >> eventName;

    std::cout << "Enter base volume: " << std::endl;
    std::cin >> volume;

    std::cout << "Enter base pitch: " << std::endl;
    std::cin >> pitch;

    std::cout << "Enter number of active sounds: " << std::endl;
    std::cin >> activeSounds;

    // PROCESS

    float mixLoad{ volume * static_cast<float>(activeSounds) };
    float adjustedPitch{ pitch * 1.1f }; // slight variation
    float normalizedLoad{ mixLoad * 0.25f };

    // OUTPUT

    std::cout << "\n=== AUDIO EVENT SUMMARY ===\n";
    std::cout << "Event Name: " << eventName << std::endl;
    std::cout << "Volume: " << volume << std::endl;
    std::cout << "Pitch: " << pitch << std::endl;
    std::cout << "Adjusted Pitch: " << adjustedPitch << std::endl;
    std::cout << "Active Sounds: " << activeSounds << std::endl;
    std::cout << "Estimated Mix Load: " << mixLoad << std::endl;
    std::cout << "Normalized Load: " << normalizedLoad << std::endl;
    std::cout << "===========================\n";

    return 0;
}

*/