#include<iostream>
using namespace std;

int x = 4; // GLOBAL variable

void fun(){
    int x = 60;
    cout << x << endl;   // Prints the local x inside fun
    ::x = 40;            // Updates the global x
    cout << ::x << endl; // Prints the updated global x
}

int main(){
    ::x = 12;            // Global x updated
    int x = 56;          // Local variable in main
    cout << x << endl;   // Prints local x in main

    cout << ::x << endl; // Accessing and printing Global Variable
    {
        int x = 11;      // Most local (inside this block)
        cout << x << endl; // Prints the most local x
    }
    fun();               // Call the fun function
    return 0;
}
