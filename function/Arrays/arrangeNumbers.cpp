#include<iostream>
using namespace std;

void arrangeNumbers(int arr[], int size){
    int j=0;

    for(int index=0; index<size; index++){
        if(arr[index] < 0){
            swap(arr[index], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[] = {1,3,-5,6,-8,5,-2};
    int size = 7;

    arrangeNumbers(arr, size);
    cout<<"Printing the array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "; 
    }
}