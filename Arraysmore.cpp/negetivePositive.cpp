#include<iostream>
using namespace std;

void negetivePositive(int arr[], int n){
    int j=0;
    //j is memory block where we store -ve value
    for(int index =0; index<n; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++; 
        }
    }
}

int main(){
    int arr[]={2,-4,5,-1,-5,6,3};
    int n=7;
    negetivePositive(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
