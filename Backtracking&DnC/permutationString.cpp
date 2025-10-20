#include<iostream>
using namespace std;

void printPermutation(string &str, int index){
    //base class
    if(index >= str.length()){
        cout<<str<<" ";
        return;
    }
    for(int j = index; j<str.length(); j++){
        swap(str[index], str[j]);
        //recursion call
        printPermutation(str, index+1);
        //Backtracking
        swap(str[index], str[j]); 
    }

}
int main(){
    string str = "abcf";
    int index = 0;
    printPermutation(str,index);
}