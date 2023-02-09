// operating with variables

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    // Declare variables
    int a;
    double b;
    char c;
    string d;
    bool e;
    auto f = d;
    decltype(d) g;

    // Assign variables
    a = 1; 
    b = 1.1;
    c = 'C';
    d = "word";
    e = false;
    f = "auto";
    g = "decltype";

    // Reassign variables
    a = a + 1;
    b = b + 1.1;
    c = 'X';
    d = "new word";
    e = true;
    f = "new auto";
    g = "new decltype";

    // Output variables
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g;

    return 0;
}