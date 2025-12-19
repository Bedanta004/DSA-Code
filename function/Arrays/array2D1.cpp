#include<iostream>
using namespace std;

void printarray(int arr[3][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
    //Printing array columnwise
    void colWisePrint(int arr[3][4], int row, int col){
        cout<<"Array columnwise: "<<endl;
        for(int i=0; i<col; i++){
            for(int j=0; j<row; j++){
                cout<<arr[j][i]<<" ";
            }
            cout<<endl;
        }
    }

int main(){
    //initialize
    int arr[3][4] = {
        {4,5,6,7},
        {2,1,3,32},
        {12,54,34,76}
    };
    //For initializing a 2D array we have to specify atleast the column size
    //Printing array
    int row=3;
    int col=4;
    printarray(arr, row, col);
    colWisePrint(arr, row, col);
    return 0;
}