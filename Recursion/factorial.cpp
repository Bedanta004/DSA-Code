#include<iostream>
#include<vector>
using namespace std;

int factMemo(int n, vector<int> &dp){
    if(n == 1 || n == 0) return 1;

    if(dp[n] != -1) return dp[n];

    return n * factMemo(n-1, dp);
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 1;
    }
    //recursive relation
    int recursiveAns = factorial(n-1);
    //processing 
    int finalAns = n * recursiveAns;

    return finalAns;

}
int main(){
    int n = 14;
    vector<int> dp(n+1, -1);
    //cout<<factorial(n)<<endl;
    cout<<factMemo(n, dp);
    return 0;
}