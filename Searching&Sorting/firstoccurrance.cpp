 /*#include<iostream>
using namespace std;

int findfirstoccurence(int arr[], int n, int target){
    int s=0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==target){
            //Store answer
            ans=mid;
            //go to left
            e=mid-1;
        }
        else if(target>arr[mid]){
            //go to right
            s = mid+1;
        }
        else if(target < arr[mid]){
            //go to left
            e = mid-1;
        }
       
    }
  return ans;
}

 int main(){
    int arr[]={1,2,3,3,3,45,6};
    int target = 3;
    int n = 7;
    int ansindex=findfirstoccurence(arr, n, target);
    if(ansindex == -1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found at index: "<<ansindex<<endl;
    }
     return 0;
 }
*/
              //Right code
#include<iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int mid =(s+e) / 2;

    //storing the answer
    int ans = -1;

    while (s <= e) {
         // Recalculate mid in each iteration

        if (arr[mid] == target) {
            // Store answer and move to the left half
            ans = mid;
            //go to left part
            e = mid - 1;
        } 
        else if (target > arr[mid]) {
            // Move to the right half
            s = mid + 1;
        } 
        else if(target < arr[mid]){
            // Move to the left half
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 6, 45};  // Sorted array
    int target = 9;
    int n = 7;
    int ansIndex = findFirstOccurrence(arr, n, target);

    if (ansIndex == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "Found at index: " << ansIndex << endl;
    }

    return 0;
}
