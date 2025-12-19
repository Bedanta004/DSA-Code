#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,4,6,8,10};
    int target;
    cout<<"Enter the number you want to find: "<<endl;
    cin>>target;
    int n=5;
    bool flag =0;
    //0--not found
    //1--found
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag == 1){
        cout<<"Target Found";
    }
    else{
        cout<<"Target not found";
    }
}