// operating with classes

#include <iostream>
#include <string>
using namespace std;

// Create a class with attributes and a method
class Car {
  public:
    string brand;   
    string model;
    int year;
    void startCar() { 
        cout << "The car is started";
    }
    void turnOffCar();
};

// Define a method outside of the class 
void Car::turnOffCar() {
  cout << "The car is turned off";
}

int main ()
{
    // Create an instance of Car
    Car car1;
    car1.brand = "BMW";
    car1.model = "X5";
    car1.year = 2019;
    car1.startCar();

    // Create another object of Car
    Car car2;
    car2.brand = "Ford";
    car2.model = "Mustang";
    car2.year = 1999;
    car2.startCar();

    Car car3;
    car3.brand = "Honda";
    car3.model = "Accord";
    car3.year = 2023;
    car3.startCar();

    // Print out the values
    cout << car1.brand << endl << car2.brand << endl << car3.brand << endl;

    return 0;
}