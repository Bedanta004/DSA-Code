#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
    int solveUsingRecursion(vector<int>& nums, int index){
                //base case
                if(index >= nums.size()){
                    return 0;
                }
                //recursive relation
                int include = nums[index] + solveUsingRecursion(nums,index+2);
                int exclude = 0 + solveUsingRecursion(nums,index+1);
                int ans = max(include, exclude);
                return ans;
            }
            //solve using Memoisation
            int solveUsingMemo(vector<int>& nums, int index, vector<int>& dp){
                //base case
                if(index >= nums.size()){
                    return 0;
                }
                //ans already exist
                if(dp[index] != -1){
                    return dp[index];
                }
                //recursive relation
                int include = nums[index] + solveUsingMemo(nums,index+2, dp);
                int exclude = 0 + solveUsingMemo(nums,index+1, dp);
                dp[index] = max(include, exclude);
                return dp[index];
            }
            //using tabulation
            int solveUsingTabulation(vector<int>& nums){
                //step 1
                int n = nums.size();
                vector<int> dp(n, -1);
                //step 2
                //store all the money of last house
                dp[n-1] = nums[n-1];
                for(int index = n-2; index >= 0; index--){
                    int tempAns = 0;
                    if(index+2 < n){
                        tempAns = dp[index + 2];
                    }
                int include = nums[index] + tempAns;
                int exclude = 0 + dp[index+1];
                dp[index] = max(include, exclude);
                }
                //right to left me 0 tak ayenge
                //for maximum of cases return dp[0]
                return dp[0];
            }
            /*
        int rob(vector<int>& nums) {
            int index = 0;
            int n = nums.size();
            //int ans = solveUsingRecursion(nums, index);
            vector<int> dp(n+1, -1);
            int ans = solveUsingMemo(nums, index, dp);
            return ans;
        }
        */
        int rob(vector<int>& nums){
            int index = 0;
            int n = nums.size();
            int ans = solveUsingTabulation(nums);
            return ans;
        }
    }; 