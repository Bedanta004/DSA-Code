#include<iostream>
using namespace std;
int main(){
    int arr[5];
    //Take input
    int n=5;
    cout<<"Enter five numbers: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Printing after input"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Doubles Printing
    cout<<"Printing the double of array"<<endl;
    for(int i=0; i<n; i++){
        cout<<2*arr[i]<<" ";
    }
}