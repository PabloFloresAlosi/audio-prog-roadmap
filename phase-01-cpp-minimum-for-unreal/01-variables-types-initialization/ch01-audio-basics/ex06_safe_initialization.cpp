/*
6) Safe Initialization Exercise

What you practice
uninitialized variables
undefined behavior
initialization

Objective

Learn not to leave variables uninitialized.

Instructions

Create two blocks:

Block A

Write an example of a poorly declared variable:

int activeVoices;

Then explain why using it without an initial value is dangerous.

Block B

Write the correct version:

int activeVoices{ 0 };

Then print the value.

Key point

This is not about doing something complex, but about training a critically important rule:
always initialize your variables.


#include <iostream>

int main()
{
    
    // Block A: Bad example
    // Declared but NOT initialized

    int activeVoices; 
    std::string x;
    float volume;

    // Problem: This variable contains an undefined (garbage) value. Using it before assigning a value leads to undefined behavior.
    
    //  Avoid doing this
    // std::cout << activeVoices << std::endl; 
    // std::cout << x << std::endl;
    // std::cout << volume << std::endl;

    // Block B: Correct example
    // Initialization: assigned a safe default value

    int activeVoicesSafe{ 0 }; 
    std::string x{ "SFX"};
    float volume{ 23 };

    std::cout << "Active Voices: " << activeVoicesSafe << std::endl;
    std::cout << "Music or SFX: " << x << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
*/