#include<iostream>
using namespace std;

bool searchArray(int arr[], int size, int target, int index){
    // Base case: if index is out of bounds
    if(index >= size){
        return false;
    }
    // If target is found at the current index
    if(arr[index] == target){
        return true;
    }
    // Recursive call
    return searchArray(arr, size, target, index+1);
}

int main(){
    int arr[] = {3,4,5,6,7,8};
    int size = 6;
    int target = 8;
    int index = 0;
    cout<<"Target found or not: "<< (searchArray(arr, size, target, index) ? "Yes" : "No") <<endl;
}
