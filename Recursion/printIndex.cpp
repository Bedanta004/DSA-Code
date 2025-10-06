#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(int arr[], int index,int size, int target, vector<int> &ans){
    if(index >= size){
        return;
    }
    if(arr[index] == target) ans.push_back(index);
    solve(arr, index+1, size, target, ans);
}

int main(){
    int arr[] = {2,3,2,2,4,2,4,1,2};
    int index = 0;
    int size = 9;
    vector<int> ans;
    int target = 2;
    solve(arr,index,size, target, ans);

    for(int num : ans){
        cout<<num<<" ";
    }
}