#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    
    while (start <= end) {
        int mid = (start + end) / 2;
        
        // found
        if (arr[mid] == target) {
            // return index of the found element
            return mid;
        }
        else if (target > arr[mid]) {
            // go to right
            start = mid + 1;
        }
        else {
            // go to left
            end = mid - 1;
        }
    }
    // if you are here, you haven't found the element
    return -1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int target = 8;
    int ansindex = binarysearch(arr, n, target);
    
    if (ansindex == -1) {
        cout << "Element not found" << endl;
    }
    else {
        cout << "Element found at index: " << ansindex << endl;
    }
    return 0;
}
