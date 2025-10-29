#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n ){
  int zerocount = 0;
  int onecount = 0;
  for(int i=0; i<n; i++){
    if(arr[i] == 0){
        zerocount++;
    }
    else if(arr[i] == 1){
        onecount++;
    }
  }
   //1 Placing all zeros first
    for(int i = 0; i < zerocount; i++) {
        arr[i] = 0;
    }

    // Placing all ones after zeros
    for(int j = zerocount; j < n; j++) {
        arr[j] = 1;
    }
  //4
}
int main(){
    int arr[]={0,1,1,0,1,0,0,1};
    int n=8;
    sortZeroOne(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

//we can replace line 1 to 4 by
// int index=0;
// while(zerocount--){
//     arr[index] = 0;
//     index++;
// }
// while(onecount--){
//     arr[index] = 1;
//     index++;
// }