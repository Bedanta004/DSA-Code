#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    int size = 5;
    int target = 65;
    
    bool ans = linearSearch(arr, size, target);
    if(ans) {
        cout << "Target found" << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}