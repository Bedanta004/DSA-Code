#include<iostream>
#include<unordered_map>
using namespace std;

//if we use ordered map then frequency will be in sorted order
void countCharacters(unordered_map<char, int> &mapping, string str){
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        mapping[ch]++;
    }
} 

int main(){
    string str = "mahanty";
    unordered_map<char, int> mapping;
    countCharacters(mapping, str);

    for(auto i: mapping){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
}