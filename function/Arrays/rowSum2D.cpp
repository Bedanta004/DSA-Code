#include<iostream>
using namespace std;

 void rowWiseSum(int arr[][4],  int row, int col ){
   
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
        sum = sum + arr[i][j];
        }
        cout<<" Sum is: "<<sum <<endl;
    }
 }
 /*
//Printng sum of diagonal elements
void diagonalsum(int arr[][4], int row, int col){
    int sum=0;
    for(int i=0; i<row; i++){
        sum = sum + arr[i][i];
    }
    cout<<" Sum is: "<<sum <<endl;
}
*/
 int main() {
    int arr[4][4] = {
        {10, 20, 30,100},
        {40, 700, 60,10},
        {70, 80, 90,20},
        {1,2,3,4}
    };
    int row = 4;
    int col = 4;
    
   rowWiseSum(arr,  row, col);
   //diagonalsum(arr, row, col);
    return 0;
}

