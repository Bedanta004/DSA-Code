#include<iostream>
using namespace std;

void solve(int num){
    if(num == 0){
        return;
    }
    //processing
    int digit = num%10;
    //update num
    num /= 10;
    //recursive call
    solve(num);
    
    cout<<digit<<" ";
    
}

int main(){
    int num = 867943;
    solve(num);
}