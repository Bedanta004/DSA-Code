#include<iostream>
using namespace std;

class Hero {
    private:
    // Private property
    int health;

    public:
    char level;
    int sir;

    //default constructor 
    Hero(){
        cout<<"Constructor created "<<endl;
    }
    //Parameterised constructor
    Hero(int health){
        //this is used to acess the health of line 7
        cout<<"this ->"<<this<<endl;
    this -> health = health;
    //the address of ramesh is storfd in this
    //this is used to access private health
    }

    

    // Getter for health
    int getHealth() {
        return health;
    }

    // Setter for health
    void setHealth(int h) {
        health = h;
    }
};

int main(){

    cout<<"Hi"<<endl;
    // //objected called statically
    Hero ramesh(12);
    //12 is given because we have to pass some parameter in p.constructor
    cout<<"Address of ramesh "<<&ramesh<<endl;

    // //dynamically constructor call
     Hero *h = new Hero;

    
}