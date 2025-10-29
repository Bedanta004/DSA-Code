#include <iostream>
using namespace std;

void shiftArray(int arr[], int n) {
    // Step 1: Store the last element in a temporary variable
    int temp = arr[n - 1];
    // Step 2: Shift elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    // Step 3: Place the last element at the first position
    arr[0] = temp;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    shiftArray(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
