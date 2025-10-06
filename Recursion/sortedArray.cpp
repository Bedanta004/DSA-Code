#include<iostream>
using namespace std;

bool checkSorted(int arr[], int size, int index){
    //base case
    if(index >= size){
        return true;
    }
    //processing
    if(arr[index] > arr[index-1]){
        //we will check next
        //now recursion will handle
        bool nextAns = checkSorted(arr, size, index+1);
        return nextAns;
    }
    else{
        return false;
    }
}

int main(){
    int arr[] = {1,2,7,4,5};
    int size = 5;
    int index = 1;

    bool isSorted = checkSorted(arr, size, index);

    if(isSorted){
        cout<<"Array is sorted"<<endl;
    }
    else{
    cout<<"Array is not sorted"<<endl;
    }
}