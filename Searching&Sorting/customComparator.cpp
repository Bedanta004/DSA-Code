#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//for searching in decreasing order
bool mycomp(int &a, int &b){
//return a < b; //for increasing order sorting
return a>b;// Decreasing order sorting
}

int main(){
    vector<int> v = {33,44,11,55,22};
    //Sorting in increasing order
    sort(v.begin(), v.end(), mycomp);
    print(v);
    return 0;
}