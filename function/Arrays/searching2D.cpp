#include<iostream>
using namespace std;

bool findTarget(int arr[][3], int row, int col, int target) {
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] == target) {
                // if found, return true
                return true;
            }
        }
    }
    // if target is not found
    return false;
}

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int row = 3;
    int col = 3;
    int target = 50;
    cout << "Found or Not: " << findTarget(arr, row, col, target) << endl;

    return 0;
}
