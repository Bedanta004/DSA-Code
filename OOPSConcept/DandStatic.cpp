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
    // Static allocation
    Hero a;
    a.level = 'A';        // Set level for static object
    a.setHealth(100);      // Set health for static object

    cout << "Level is: " << a.level << endl;
    // Print health using getter
    cout << "Health is: " << a.getHealth() << endl;

    // Dynamically allocated object
    Hero *b = new Hero();
    b->level = 'B';       // Set level for dynamic object
    b->setHealth(90);     // Set health for dynamic object

    // Accessing members using pointer dereferencing
    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).getHealth() << endl;

    // You can also use the arrow operator for better readability
    cout << "Level using arrow operator: " << b->level << endl;
    cout << "Health using arrow operator: " << b->getHealth() << endl;

    // Clean up dynamically allocated memory
    delete b;

    return 0;
}
