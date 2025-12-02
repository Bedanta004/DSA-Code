#include<iostream>
#include<vector>
using namespace std;

int solveUsingRec(int n, int x, int y, int z, vector<int>& dp){
    if(n == 0){
        return 0;
    }
    if(n < 0){
        return INT_MIN;
    }
    //step 3
    if(dp[n] != INT_MIN){
        return dp[n];
    } 

    int opt1 = 1 + solveUsingRec(n-x, x, y, z, dp);
    int opt2 = 1 + solveUsingRec(n-y, x, y, z, dp);
    int opt3 = 1 + solveUsingRec(n-z, x, y, z, dp);

    dp[n] = max(opt1,(opt2, opt3));
    return dp[n];
} 

int maxizeTheCuts(int n, int x, int y, int z){
    vector<int> dp(n+1, INT_MIN);
    int ans = solveUsingRec(n, x, y, z, dp);
    return ans; 
}