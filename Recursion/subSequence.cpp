#include<iostream>
using namespace std;

void findSubsequence(string str, string output, int index){
    //base case
    if(index >= str.length()){
        //ans is stored in output string
        //print it
        cout<<output<<endl;
        return;
    }
    //standing in character 
    char ch = str[index];
 
    //exclude
    findSubsequence(str, output, index+1);
    //include
    //output string me character ko include karlo
    output.push_back(ch);
    findSubsequence(str, output, index+1);
}

int main(){
    string str  = "abr";
    string output = " ";
    int index = 0;
    findSubsequence(str, output, index);
}