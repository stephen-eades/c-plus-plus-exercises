// operating with arrays

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Initialize array
    string myarray[5] = {"first", "second", "third", "fourth", "sixth"};

    // Access first element 
    string f = myarray[0];

    // Change the final element
    myarray[4] = "fifth";

    // Get array size in bytes
    int b = sizeof(myarray);

    // Get number of elements in array
    int s = sizeof(myarray) / sizeof(string);

    // Multidimensional array 
    string letters[2][4] = {
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };

    // Access multidimensional array
    string h = letters[1][3];

    cout << myarray << endl << f << endl << b << endl << s << endl << h << endl;

    return 0;
}