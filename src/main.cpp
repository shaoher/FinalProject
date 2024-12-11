#include <iostream>
#include <string>

using namespace std;
// For this project I need to create a project that has the following: 
// Class
// variable
// Struct or enum
// function
// control structure
// With the following I want to create a project of a real life scenario of a car rental
// where renters would be directed to what level the rented car is located based on the make, model, and year of the car 

enum Level { LEVEL1 = 1, LEVEL2, LEVEL3};

// now we are going to create a class for our rental cars along with the private members
class Car {
    private:
    string make;
    string model;
    int year;
    Level level;

// now we are going to add public members. A public member is accessible from outside the class. 
    public:
        Car(string mk, string md, int yr) : make(mk), model(md), year(yr) {
            assignLevel();
        }

        bool assignLevel() {
// we will be working with Toyota, Ford, Honda and they will be assigned accordingly.
            if (make == "Toyota") {
                level = LEVEL1;
                return true;
            } else if (make == "Ford") {
                level = LEVEL2;
                return true;
            } else if (make == "Honda") {
                level = LEVEL3;
                return true;
// we've added all 3 of our make of the cars. we have to expect that the user may type other make that aren't included
// so therefore we must have to add an else statement 
            } else {
                return false;
            }
        }

// in this section we will diaplay the car information and where it is located
        void display() {
            if (assignLevel()) {
                cout << "Car Make: " << make << "\nModel: " << model << "\nYear: " << year << endl;
                cout << "Parking Level: " << level << endl;
            } else {
                cout << "The make entered is unavailable." << endl;
            }
        }
    };

// In this section we will be implementing our control structure and allow the user's input
int main() {
    string make, model;
    int year;

    cout << "\nWelcome to the Parking Lot Car Rental!" << endl;

    cout << "Which is your desired car make? Toyota, Ford, Honda: ";
    getline(cin, make);
    cout << "Enter the car model: ";
    getline(cin, model);
    cout << "Enter the car year: ";
    cin >> year;
    cin.ignore();

// in this section we will create the car object and display the rental car information
Car rentalCar(make, model, year);
if (rentalCar.assignLevel()) {
rentalCar.display();
} else {
    cout << "The make entered is unavailable." << endl;
}


// Thank our customer for using our parking lot car rental
cout << "Thank you for using the Parking Lot Car Rental!" << endl;
return 0;
}
