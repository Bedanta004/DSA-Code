#include<iostream>
using namespace std;

// void reverseArray(int arr[], int size){
//     int left=0;
//     int right=size-1; 
//     //using While Loop
//     while(left<=right){
//         swap(arr[left], arr[right]);
//         left++;right--;
//     }
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Using for Loop
void ArrayReverse(int brr[], int size){
    for(int left=0, right = size-1; left<=right; left++, right--){
        swap(brr[left], brr[right]);
    }
    for(int i=0; i<size; i++){
        cout<<brr[i]<<" ";
    }
}
int main(){
    int brr[6]={10,20,30,40,50,60};
    int size = 6;
    ArrayReverse(brr, size);
    cout<<endl;
    
}