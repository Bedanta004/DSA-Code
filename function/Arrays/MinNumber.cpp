#include<iostream>
#include<limits.h>
using namespace std;
// int main(){
//    cout<<INT_MIN<<endl;== (-2147483648)
//    cout<<INT_MAX<<endl;== (2147483648)
// }  
/*
int findMinimuminArray(int arr[], int size){
   int minAns = INT_MAX;
   for(int i=0; i<size; i++){
      if(arr[i] < minAns){
         minAns=arr[i];
      }
   }
   return minAns;
}
*/
int findMaximuinArray(int arr[], int size){
   int maxAns=INT_MIN;
   for(int i=0; i<size; i++){
      if(arr[i]>maxAns){
         maxAns=arr[i];
      }
   }
   return maxAns;
}

int main(){
    int arr[] = {23,23,3,3,43,44,90};
    int size=7;
    //int minimum = findMinimuminArray(arr,size);
    //cout<<minimum;
   int maximum = findMaximuinArray(arr, size);
   cout<<maximum;
    
}