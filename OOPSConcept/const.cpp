#include<iostream>
using namespace std;

int main(){
    const int x = 5;//x is constant
    //initialization can be done but can't reassigned
    cout<<x<<endl;

    //2.const with pointers
    int *a = new int;
    *a = 2;
    cout<<*a<<endl;
    int b = 5;
    a = &b;
    cout<<*a<<endl;

    int *y = new int(10);
    cout<<*y<<endl;

    //constant pointer but non constant data
    int *const d = new int(40);
    *d = 4;
    cout<<*d<<endl;

    //constant pointer and constant data
    // const int *const e= new int(23);
    // cout<<*e<<endl;
    // *e= 55;
    // int f = 550;
    // e=&f;
    


}