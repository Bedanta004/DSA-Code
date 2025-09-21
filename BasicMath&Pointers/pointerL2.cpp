#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    //Error int* ptr = &arr;
    //Pointer to an array
    int (*ptr)[5] = &arr;
    cout<<(*ptr)[2]<<endl;

     
}