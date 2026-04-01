/*

A function is a reusable sequence of statements designed to do a particular job.

Here is a sample program that illustrates a user-defined function being defined and called:
#include <iostream> // for std::cout

// Definition of user-defined function doPrint()
// doPrint() is the called function in this example
void doPrint()
{
    std::cout << "In doPrint()\n";
}

// Definition of user-defined function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint();                        // Interrupt main() by making a function call to doPrint().  main() is the caller.
    std::cout << "Ending main()\n";   // This statement is executed after doPrint() ends

    return 0;
}

// One useful thing about functions is that they can be called more than once.

Warning

When calling a function, don’t forget the parentheses () after the function’s name. 
If you forget the parentheses, your program may not compile (and if it does, the function will not be called).
in C++, functions cannot be nested.

Function return values

#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}


#include <iostream>

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement provides the value that will be returned
    return 5; // return the value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n'; // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it

    return 0;
}

Another Example

#include <iostream>

int getValueFromUser() // this function now returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entered back to the caller
}

int main()
{
    int num { getValueFromUser() }; // initialize num with the return value of getValueFromUser()

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}


When this program executes, the first statement in main will create an int variable named num. When the program goes to initialize num, 
it will see that there is a function call to getValueFromUser(), so it will go execute that function. Function getValueFromUser, 
asks the user to enter a value, and then it returns that value back to the caller (main()). 
This return value is used as the initialization value for variable num. num can then be used as many times as needed within main().

Tip

If you need to use the return value of a function call more than once, initialize a variable with the return value, 
and then use that variable as many times as needed.

Best practice

Your main function should return the value 0 if the program ran normally.

Because of the wide variety of possibilities here, it’s a good idea to document your function with a comment indicating what the return values mean. For example:

// Function asks user to enter a value
// Return value is the integer entered by the user from the keyboard
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entered back to the caller
}

Best practice

Follow DRY: “Don’t repeat yourself”.If you need to do something more than once, consider how to modify your code to remove as much redundancy as possible. 
Variables can be used to store the results of calculations that need to be used more than once (so we don’t have to repeat the calculation). 
Functions can be used to define a sequence of statements we want to execute more than once. 
And loops (which we’ll cover in a later chapter) can be used to execute a statement more than once.

Void return values FUNCTIONS
#include <iostream>

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    return 0;
}
Best practice

Do not put a return statement at the end of a non-value returning function.

Function parameters and arguments

A function parameter is a variable used in the header of a function. 
Function parameters work almost identically to variables defined inside the function, 
but with one difference: they are initialized with a value provided by the caller of the function.

Here are some examples of functions with different numbers of parameters:

// This function takes no parameters
// It does not rely on the caller for anything
void doPrint()
{
    std::cout << "In doPrint()\n";
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
    std::cout << x << '\n';
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
    return x + y;
}

An argument is a value that is passed from the caller to the function when a function call is made:

Ezoic
doPrint(); // this call has no arguments
printValue(6); // 6 is the argument passed to function printValue()
add(2, 3); // 2 and 3 are the arguments passed to function add()

How parameters and arguments work together

When a function is called, all of the parameters of the function are created as variables, 
and the value of each of the arguments is copied into the matching parameter (using copy initialization). 
This process is called pass by value. Function parameters that utilize pass by value are called value parameters.

For example:

#include <iostream>

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

int main()
{
    printValues(6, 7); // This function call has two arguments, 6 and 7

    return 0;
}
When function printValues is called with arguments 6 and 7, 
printValues‘s parameter x is created and initialized with the value of 6, 
and printValues‘s parameter y is created and initialized with the value of 7.


#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void printDouble(int value) // This function now has an integer parameter
{
    std::cout << value << " doubled is: " << value * 2 << '\n';
}

int main()
{
    int num{ getValueFromUser() };

    printDouble(num);

    return 0;
}

Best practice

When a function parameter exists but is not used in the body of the function, do not give it a name. You can optionally put a name inside a comment.