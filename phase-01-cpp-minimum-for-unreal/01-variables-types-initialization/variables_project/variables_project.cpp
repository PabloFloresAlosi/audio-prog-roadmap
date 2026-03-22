/*#include <iostream> // for std::cout

int main()
{
    std::cout << 5;       // print the literal number `5`
    std::cout << -6.7;    // print the literal number `-6.7`
    std::cout << 'H';     // print the literal character `H`
    std::cout << "Hello"; // print the literal text `Hello` 

    return 0;
} 
Pay attention to 'H' or "Hello" */

/*int main()
{
    int x;    // define an integer variable named x (preferred)
    int y, z; // define two integer variables, named y and z

    return 0;
}*/

/*#include <iostream>

int main()
{
	int width; // define a variable named width
	width = 5; // copy assignment of value 5 into variable width

	std::cout << width; // prints 5

	width = 7; // change value stored in variable width to 7

	std::cout << width; // prints 7

	return 0;
}*/

/*int a;         // default-initialization (no initializer)

// Traditional initialization forms:
int b = 5;     // copy-initialization (initial value after equals sign)
int c ( 6 );   // direct-initialization (initial value in parenthesis)

// Modern initialization forms (preferred):
int d { 7 };   // direct-list-initialization (initial value in braces)
int e {};      // value-initialization (empty braces)*/

/*#include <iostream> // for std::cout

int main()
{
    int x{ 5 };
    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
    return 0;
}*/

/*#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and value-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}
Enter a number: 4
You entered 4*/

/* Operators

std::cout << 3 + 4 << '\n'; 7
std::cout << 3 + 4 - 5 << '\n'; 2
std::cout << 2 + 3 * 4 << '\n'; 14
int x { 2 };
std::cout << (x = 5) << '\n'; 5

*/

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;
}