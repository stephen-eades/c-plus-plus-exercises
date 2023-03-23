// operating with loops

#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    // Create a basic for loop
    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    // Create a for-each loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    // Create a while loop 
    int i = 0;
    while (i < 5) {
        cout << i << "\n";
        i++;
    }

    // Create a do-while loop
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    }
    while (i < 5);

    // Create a nested for loop
    for (int i = 1; i <= 2; ++i) {
        cout << "Outer: " << i << "\n"; // Part of the outer loop

        for (int j = 1; j <= 3; ++j) {
            cout << " Inner: " << j << "\n"; // Part of the inner loop
        }
    }

    // Create a for loop with a break
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i << "\n";
    }

    // Create a for loop with a continue
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        cout << i << "\n";
    }    

    return 0;
}