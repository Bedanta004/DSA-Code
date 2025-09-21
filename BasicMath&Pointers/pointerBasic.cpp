#include<iostream>
using namespace std;
int main(){
    int a = 5;
    char ch = 'a';
    //Character pointer creation
    char *cptr = &ch;

    cout<<"Address of a is: "<<&a<<endl;

    //Pointer creation
    int*  ptr = &a;
    cout<<"Accessing : "<<*ptr<<endl;
    //Address of the a
    cout<<"Accessing it : "<<ptr<<endl;
    //Address of the ptr where the address of a is stored
    cout<<"Accessing again  : "<<&ptr<<endl;

    cout<<"Character pointer is: "<<cptr;
    
}