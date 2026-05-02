#include<iostream>
using namespace std;

int squareroot(int x){
    int s = 0;
    int e = x;
    long long int mid = s + (e-s)/2;
    //long long int to store large number
    int ans = -1;

    while(s<=e){
        //if mid is the answer
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid <= x){
            //store answer
            //go to right
            ans = mid;
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

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int result = squareroot(number);
    cout << "The square root of " << number << " is  " << result << endl;

    return 0;
}