// operating with functions

#include <iostream>
using namespace std;

// Create a function
void myFunction() {
    cout << "This is an example function!";
}

// Create a function that takes a parameter
void nameFunction(string fname) {
    cout << fname << " is my first name.\n";
}

// Create a function that has a default parameter
void countryFunction(string country = "United States") {
    cout << country << "\n";
}

// Create a function that takes multiple parameters
void ageFunction(string fname, int age) {
    cout << fname << " is " << age << " years old. \n";
}

// Create a function that returns an integer
int intFunction(int x) {
    return 5 + x;
}

int main ()
{
    // Call the first function we declared
    myFunction();

    // Call the second function we declared, passing in a string
    nameFunction("Stephen");

    // Call the third function we declared, passing in a string
    countryFunction("Sweden");

    // Call the fourth function we declared, passing in a string and number
    ageFunction("Stephen", 29);

    // Call the fifth function we declared, padding in a number and recieving a number back
    int myInt = intFunction(1);

    return 0;
}