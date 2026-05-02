#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int mid, int r){
    int n1 = mid -l +1;
    int n2 = r - mid;

    vector<int> lArr, rArr;

    for(int i=0; i<n1; ++i){
        lArr.push_back(arr[l+i]);
    }

    for(int i=0; i<n2; ++i){
        rArr.push_back(arr[mid+i+1]);
    }

    int i=0; 
    int j=0;
    int k = l;

    while(i < n1 && j < n2){
        if(lArr[i] <= rArr[j]){
            arr[k] = lArr[i];
            ++i;
        }
        else{
            arr[k] = rArr[j];
            ++j;
        }
        ++k;
    }

    while(i < n1){
        arr[k] = lArr[i]; 
        ++i;
        ++k;
    }

    while(j < n2){
        arr[k] = rArr[j];
        ++j;
        ++k;
    }
}

void mergeSort(vector<int> &arr, int l, int r){

    if(l < r){
    int mid = (l+r)/2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, mid, r);
    }
}


int main(){
    vector<int> arr {1,9,2,4,6,10,3};

    for(int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    mergeSort(arr, 0, arr.size()-1);

    cout<<"After Sorting :"<<endl;

    for(int i : arr){
        cout<<i<<" ";
    }
}
