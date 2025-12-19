#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[3][3], int row, int col) {
  int maxAns = INT_MIN;
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
      if(arr[i][j] > maxAns){
        maxAns=arr[i][j];
      }
    }
  } 
  return maxAns; 
}
// int findMin(int arr[3][3]; int row; int col){
//   int minAns = INT_MAX;
//   if(int i=0; i<row; i++){
//     if(int j=0; j<col; j++){
//       if(arr[i][j] < minAns){
//         minAns = arr[i][j];
//       }
//     }
//   }
//   return minAns;
// }

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 190},
        {70, 80, 90}
    };
    int row = 3;
    int col = 3;
    cout<<"Printing maximum no.: "<<findMax(arr, row, col)<<endl;
    
    return 0;
  }
