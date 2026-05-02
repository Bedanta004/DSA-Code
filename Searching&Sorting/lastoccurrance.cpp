#include<iostream>
using namespace std;

int findlastoccurrance(int arr[], int n, int target){
    int s=0; 
    int e= n-1;
    int mid = (s+e)/2;

    int ans= -1;

    while (s<=e){
        if(arr[mid] == target){
            //ans store
            ans = mid;
            //go to right
            s = mid + 1;
        }
        else if(target > arr[mid]){
            //go to right
            s = mid + 1;
        }
        else if(target < arr[mid]){
            //go to left
            e = mid - 1;
        }
        mid = (s+e)/2;

    }
    return ans;
   
}
int main(){
    int arr[] = {1,2,3,3,3,6,8};
    int target = 3;
    int n = 7;
    int ansindex = findlastoccurrance(arr, n, target);
    if(ansindex == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Element found at:"<<ansindex<<endl;
    }
    return 0;
}