#include<iostream>
using namespace std;

    // int printmax(int n1,int n2,int n3){
    // int ans1=max(n1,n2);
    // int ans=max(ans1,n3);
    //  return ans;

    // }
    // int main(){
    //     int maximum=printmax(2,20,200);
    //     cout<<"Maximun number is:"<<maximum<<endl;
    // }

    // void oddeven(int n){
    //     if(n%2==0){
    //         cout<<"even no."<<endl;
    //     }
    //     else{
    //         cout<<"odd no."<<endl;
    //     }
    // }
    // int main(){
    //      oddeven(13);
    //     return 0;
    // }

    // void printsum(int n){
    //     int sum=0;
    //     for(int i=1; i<=n; i++){
    //         sum = sum +i;
    //     }
    //     cout<<sum;
    // }
    // int main(){
    //     printsum(10);
    // }


//Sum of all even numbers
    void evensum(int n){
        int sum=0;
        for(int i=0; i<=n; i=i+2){
            sum=sum+i;
        }
        cout<<sum<<endl;
    }
    int main(){
        evensum(5);
    }
