// operating with loops

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

int main ()
{
    // Call the first function we declared
    myFunction();

    // Call the second function we declared, passing in a string
    nameFunction("Stephen");

    // Call the third function we declared, passing in a country
    countryFunction("Sweden");

    ageFunction("Stephen", 29)

    return 0;
}