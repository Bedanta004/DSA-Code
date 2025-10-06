#include<iostream>
using namespace std;

void printArray(int arr[], int size, int index){  
    //base case
    if(index >= size){
        return;
    }
    //processing
    cout<<arr[index]<<" ";

    //recursive call
    printArray(arr, size, index+1);
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int size =6;
    int index = 0;
    printArray(arr, size, index);
}