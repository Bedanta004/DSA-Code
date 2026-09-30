#include<iostream>
using namespace std;

class Hero {
    private:
    // Private property
    int health;

    public:
    char level;
    int sir;

    // Getter for health
     int getHealth() {
         return health;
    }

    // Setter for health
     void setHealth(int h) {
        health = h;
    }
};

int main() {
    // Creation of object
    Hero ramesh;

    //Accessing using dot operator
    // Setting the values using setter
    ramesh.setHealth(22);  // Set health value
    ramesh.level = 'A ';    // Set level value
    ramesh.sir=100;

    // Output the values
    cout << "Health is: " << ramesh.getHealth() << endl;
    cout << "Level is: " << ramesh.level << endl;
    cout << "Value of sir is: " << ramesh.sir << endl;


    return 0;
}
