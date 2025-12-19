#include<iostream>
using namespace std;
int main(){
    int arr[20];
    //size of
    cout<<"Size of arr is:"<<sizeof(arr)<<endl;
    //address of
    cout<<"Address of arr is  :"<<&arr<<endl;
    cout<<"Address of arr is  :"<<arr<<endl;


     //indexing of array
     int vrr[5]={2,7};
     cout<<vrr[3]<<endl;
     

    //printing numbers of array
    
    int crr[5]={3,89,32,4,11};
   
    int n=5;
    for(int i=0;i<n; i++){
        cout<<crr[i]<<" ";
    }
    cout<<endl;
    cout<<"Next Array"<<endl;
    int drr[5]={4,76};
    int k=5;
    for(int i=0; i<k; i++){
        cout<<drr[i]<<" ";
    }
}