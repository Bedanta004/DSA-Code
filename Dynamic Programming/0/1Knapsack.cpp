#include<iostream>
#include<vector>
using namespace std;

int solveUsingMemo(int capacity, int wt[], int profit[], int index, int n){
    //base case
    if(index >= n){
        return 0;
    }

    //inclusion / exclusion
    int include = 0;
    if(wt[index] <= capacity){
        include = profit[index] + solveUsingRecursion(capacity-wt[index],wt,profit,index+1,n);
    }
    int exclude = 0 + solveUsingRecursion(capacity, wt, profit, index+1, n);
    int ans = max(include,exclude);
    return ans;
}

int solveUsingRecursion(int capacity, int wt[], int profit[], int index, int n, vector<vector<int>> &dp){
    //base case
    if(index >= n){
        return 0;
    }
    //already exist
    if(dp[capacity][index] != -1){
        return dp[capacity][index];
    }
    //inclusion / exclusion
    int include = 0;
    if(wt[index] <= capacity){
        include = profit[index] + solveUsingMemo(capacity-wt[index],wt,profit,index+1,n, dp);
    }
    int exclude = 0 + solveUsingMemo(capacity, wt, profit, index+1, n, dp);
    dp[capacity][index] = max(include,exclude);
    return dp[capacity][index];
}

int main(){
    int capacity = 50;
    int wt[] = {10,20,30};
    int profit[] = {60,100,120};
    int index = 3;
    int n = 3;

    vector<vector<int>> dp(capacity + 1, vector<int>(n+1, -1));

    // int ans = solveUsingRecursion(capacity, wt, profit, 0, n);
    // cout<<"Max profit: "<<ans<<endl;

    int ans = solveUsingMemo(capacity, wt, profit, 0, n, dp);
    cout<<"Max profit: "<<ans<<endl;
}