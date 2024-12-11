#include <iostream>
#include <string>

using namespace std;

// For this program, I want to create a game that offer user to choose between three types of chocolate.
// The user will have the ability to view, add/remove chocolate from the inventory, and process orders.
// Note that we must have the following included in our code:
// 2 classes, variable, struct or enum, array, function, control structure 

// Enum
enum class ChocolateType {Milk, Dark, White};

// Chocolate class
class Chocolate {
public: 
    string name;
    int quantity;

    Chocolate(string n, int q) : name(n), quantity(q) {}
};

// ChocolateFactory class
// Array
class ChocolateFactory {
private:
    Chocolate inventory[3] = {
        Chocolate("Milk Chocolate", 100),
        Chocolate("Dark Chocolate", 100),
        Chocolate("White Chocolate", 100)
};

public:
    void DisplayInventory() {
        cout << "\nCurrent Inventory:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << inventory[i].name << " , Quantity: " << inventory[i].quantity << endl; 
        }
    }