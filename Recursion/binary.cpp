#include<iostream>
using namespace std;

int binarySearch(int arr[], int s, int e, int target){
    // base case
    if(s > e){
        // element not found
        return -1;
    }
    // processing
    int mid = s + (e - s) / 2;
    if(arr[mid] == target){
        return mid;
    }
    // recursion will handle the remaining part
    if(arr[mid] < target){
        // search in the right half
        return binarySearch(arr, mid + 1, e, target);
    }
    else{
        // search in the left half
        return binarySearch(arr, s, mid - 1, target);
    }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int s = 0;
    int e = size - 1;
    int target = 12;

    int foundIndex = binarySearch(arr, s, e, target);

    if(foundIndex != -1){
        cout << "Element found at index " << foundIndex << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}
