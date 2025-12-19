#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> arr(5, vector<int>(10,0));
//Row size: arr.size()
for(int i=0; i<arr.size(); i++){
    for(int j=0; j<arr[i].size(); j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<end;
}