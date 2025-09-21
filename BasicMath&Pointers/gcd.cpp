#include<iostream>
using namespace std;

//GCD using Euclid's Algorithm
 
int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }
    while(a>0 && b>0){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
    //a zero hai to b return karo nahi to return a
    return a == 0? b : a;
}
int main(){
    int ans = gcd(24, 72);
    cout<<"Ans is : "<<ans<<endl;
}