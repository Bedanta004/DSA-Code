#include<iostream>
using namespace std;

int findmissingelement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        int diff = arr[mid]-mid;

        if(diff == 1){
            //go to right
            s = mid + 1;
        }
        else{
            //store answer
            ans = mid;
            //go to left
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans+1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,8,9};
    int n= 7;
    cout<<"Missing element is: "<<findmissingelement(arr, n);
    return 0;
}