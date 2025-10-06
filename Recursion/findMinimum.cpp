#include<iostream>
#include<limits.h>
using namespace std;

void findMin(int arr[], int size, int index, int &mini){  
    //base case
    if(index >= size){
        return; 
    }
    
    //processing
    mini = min(mini, arr[index]);

    //recursive call
    findMin(arr, size, index+1, mini);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int index = 0;

    int mini = INT_MAX;
    findMin(arr, size, index, mini);
    cout << "Minimum number in array: " << mini << endl;

    return 0;
}
