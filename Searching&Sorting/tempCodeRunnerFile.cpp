#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        

        while (s < e) {
            int mid = s + (e - s) / 2;
            if (arr[mid] < arr[mid + 1]) {
                // If we are on the increasing part, move to the right half
                s = mid + 1;
            } else {
                // If we are on the decreasing part, or at the peak, move to the left half
                e = mid;
            }
        }
        // The loop exits when s == e, which is the peak index
        return e;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {10,20,50,9,8,7,6,5}; // Example input
    cout << "Peak index in mountain array: " << solution.peakIndexInMountainArray(arr) << endl;
    return 0;
}
 