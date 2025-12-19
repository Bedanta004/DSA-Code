#include<iostream>
using namespace std;
int main(){
    int n=3;
    //k and c are reference variable refering to n
    int &k=n;
    int &c=n;
    
    cout<<c<<endl;
    cout<<k<<endl;

}