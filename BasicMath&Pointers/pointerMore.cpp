#include<iostream>
using namespace std;

void solve(int *arr, int size){
    cout << "Inside solve arr (pointer to first element): " << arr << endl;
    cout << "Inside solve &arr (address of local pointer arr): " << &arr << endl;
}

int main(){
    int arr[] = {1, 3, 5, 7, 9};

    solve(arr, 5);
    cout << "Inside main arr (pointer to first element): " << arr << endl;
    cout << "Inside main &arr (address of the entire array): " << &arr << endl;
}
