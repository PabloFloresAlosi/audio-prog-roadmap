/*Exercise 03 — Playback Status Report

Concepts practiced

Void functions
Code organization
Console output formatting

Goal
Display a simple audio playback status panel.

Instructions
Create a void function:

void printPlaybackStatus()

Inside the function, print a formatted block like this:

=== PLAYBACK STATUS ===
Event: MagicExplosion
Volume: 0.8
Pitch: 1.1
Looping: false
=======================

Call the function from main().

Important
The function should not return any value. It performs an action (printing to the console).

Extra (optional)
Split the logic into two functions:

printHeader()
printSoundInfo()


====================== = SOLUTION ======================



#include <iostream>

void printPlaybackStatus()
{
    std::string eventName{ "MagicExplosion" };
    float volume{ 0.8f };
    float pitch{ 1.1f };
    bool isLooping{ false };

    std::cout << "=== PLAYBACK STATUS ===\n";
    std::cout << "Event: " << eventName << "\n";
    std::cout << "Volume: " << volume << "\n";
    std::cout << "Pitch: " << pitch << "\n";
    std::cout << "Looping: " << isLooping << "\n";
    std::cout << "=======================\n";
}

int main()
{
    printPlaybackStatus();
    return 0;
}
*/