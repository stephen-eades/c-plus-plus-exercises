// operating with strings

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Declare string
    string mystring;

    // Assign string 
    mystring = "This is a string";

    // Reassign string 
    mystring = "This is a new string";

    // Append to string
    mystring = mystring.append(" that has been ");
    mystring += "appended";

    // Concatenate string
    string newstring = "and also concatenated.";
    mystring = mystring + " " + newstring;

    // Get length of string
    string length = to_string(mystring.length());
    mystring = mystring + " The string length is " + length;

    // Access character in string 
    char firstchar = mystring[0];
    mystring = mystring + ". The first character is " + firstchar + ".";

    cout << mystring << endl;

    return 0;
}