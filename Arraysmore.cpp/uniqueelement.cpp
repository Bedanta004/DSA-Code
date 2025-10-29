#include<iostream>
using namespace std;
int getunique(int nums[], int n){
 int ans = 0;
 for(int i=0; i<n; i++){
    ans = ans ^ nums[i];
 }
 return ans;
    }

    
    

int main(){
    int nums[]={1,3,1,7,7};
    int n=5;
    
    cout<<getunique(nums,n);
    
    
}