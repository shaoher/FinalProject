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

    void updateInventory(int typeChoice, int quantity) {
        if (typeChoice >= 1 && typeChoice <= 3) {
            inventory[typeChoice - 1].quantity += quantity;
            cout << "Inventory has been updated." << inventory[typeChoice - 1].name
                << " now has " << inventory[typeChoice - 1].quantity << "items." << endl;
        } else {
            cout << "Invalid selection." << endl;
        }
    }
};


int main() {
    ChocolateFactory factory;
    cout << "\n Welcome to the Chocolate Factory! Please choose an option below." << endl;
    cout << "1. View Inventory." << endl;
    cout << "2. Update Inventory." << endl;
    cout << "3. Exit." << endl;

// type int, variable choice
    int choice;
    cout << "Enter your option here: ";
    cin >> choice;

// 
switch (choice) {
    case 1: factory.DisplayInventory();
    break;
    case 2: {
        cout << "\nPlease select an option below." << endl;
        cout << "1. Milk Chocolate" << endl;
        cout << "2. Dark Chocolate" << endl;
        cout << "3. White Chocolate" << endl;

        int typeChoice;
        cin >> typeChoice;

        int quantity;
        cout << "Enter any number to add to the inventory or use a negative value to subtract: ";
        cin >> quantity;

        factory.updateInventory(typeChoice, quantity);
        break;
    }

    case 3:
        cout << "Thank you for visiting the Chocolate Factory!" << endl;
        break;
    }
    return 0;
}
