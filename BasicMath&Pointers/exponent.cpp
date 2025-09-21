#include<iostream>
using namespace std;

//Normal Method (Time complexity o(b))
// int slowExponent(int a, int b){
//     int ans=1;
//     for(int i=0; i<b; i++){
//         ans= ans*a;
//     }
//     return ans;
// }
// int main(){
//     cout<<"Answer is: "<<slowExponent(2,4)<<endl;
// }

int fastExponent(int a, int b){
    int ans=1;
    while(b>0){
        if(b & 1){
            //if b is odd
            ans = ans*a;
        }
        a = a*a;
        b>>=1;
    }
    return ans;
}
int main(){
     cout<<"Answer is: "<<fastExponent(2,4)<<endl;
}