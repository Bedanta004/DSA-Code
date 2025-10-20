 #include<iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int mid = (s+e)/2;

    int lenLeft = mid - s +1;
    int lenRight = e - mid;
    // creating left and right array
    int *left = new int[lenLeft]; 
    int *right = new int[lenRight];

    //copy values from original array to left array
    int k = s;
    //k is starting index of left array values in original array
    for(int i=0; i<lenLeft; i++){
        left[i] = arr[k];
        k++;
    }
    //copy values from original array to right array
    k = mid+1;
    for(int i=0; i<lenRight; i++){
        right[i] = arr[k];
        k++;
    }
    //actual merge logic 
    //left array is already sorted
    //right array is already sorted
    int leftIndex= 0; //to traverse left part
    int rightIndex=0; //to traverse right part
    //yahan galti karte hain
    int mainArrayIndex = s; //traverse main array

    while(leftIndex < lenLeft && rightIndex < lenRight){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;  
            rightIndex++;

        }
    }
    //2 more cases
    //left array exhaust by right array or element abhi bhi bacha hai
    while(rightIndex < lenRight){
        arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;  
            rightIndex++;

    }
    //right array exhaust by left array or element abhi bhi bacha hai
    while(leftIndex < lenLeft){
        arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;

    }
    //1 more step: delete heap memory
    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int s, int e){
    //base case
    if(s>=e){
        //invalid array
        return;
    }
    if(s == e){
        //single element
        return ;
    }
    int mid = (s+e)/2;
    //recursion call
    //sort left part of array
     mergeSort(arr, s, mid);
         
     //sort right part of array
     mergeSort(arr, mid+1, e);    
     //merge  2 arrays
     merge(arr, s, e);
    }

int main(){
    int arr[] = {2,1,3,3,6,5};
    int size = 6;
    int s =0;
    int e = size - 1;

    cout<<"Before mergesort: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr, s, e);

    cout<<"After mergesort: "<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}