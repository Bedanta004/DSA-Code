#include<iostream>
using namespace std;
int main(){
  int arr[5];
  int n=5;  
  cout<<"Enter 5 Numbers:"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  cout<<"Printing the array"<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  cout<<"Sum of all digits of array is:";
  int sum=0;
  for(int i=0; i<n; i++){
    sum =sum+arr[i];
  }
  cout<<sum;
}