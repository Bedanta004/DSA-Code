#include<iostream>
using namespace std;

int getQuotient(int divisor, int dividend){
    int s = 0;
    int e = dividend;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid * divisor == dividend){
            return mid;
        }
        if(mid * divisor < dividend){
            //ans store
            ans = mid;
            //go to right
            s = mid + 1;
        }
        else{
           //go to left
           e = mid - 1; 
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int divisor = 7;
    int dividend = 49;
    int ans = getQuotient(abs(divisor), abs(dividend));
    //We will decide sign will be positive or negetive
    if((divisor > 0 && dividend < 0) || (divisor < 0 && dividend > 0)){
        ans = 0 - ans;
    }
    cout<<"Final answer is : "<<ans<<endl;
}