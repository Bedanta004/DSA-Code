#include <iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int low = 0, high = m * n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int midValue = matrix[mid / n][mid % n]; // Convert 1D index to 2D

        if (midValue == target)
            return true;
        else if (midValue < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{1, 3, 5, 7},
                                  {10, 11, 16, 20},
                                  {23, 30, 34, 60}};
    int target = 3;
    cout << (searchMatrix(matrix, target) ? "Found the digit" : "Not Found") << endl;
    return 0;
}
