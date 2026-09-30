#include<iostream>
using namespace std;

class Human {
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this->age;
    }
    void setWeight(int w) {
        this->weight = w;
    }

};

class Male : public Human {
    public:
    string color;
    void sleep() {
        cout << "Male sleeping" << endl;
    }

};

int main(){
    Male object1;
    //We can access height, weight and age which are not in male but inherited by Human class
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;
    object1.sleep();

    object1.setWeight(31);
    cout<<object1.weight<<endl;

}