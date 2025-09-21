#include<iostream>
using namespace std;

//Pass by value
void solve(int* p){
    //Try solve(int* &p) Pass by reference
    p = p + 1;
}

int main(){
    int a =5;
    int* p = &a;

    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;
    solve(p);
    cout<<" p : "<<p<<endl;
    cout<<" &p : "<<&p<<endl;
    cout<<" *p : "<<*p<<endl;

}