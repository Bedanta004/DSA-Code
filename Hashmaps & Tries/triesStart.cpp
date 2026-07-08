#include<iostream>
using namespace std;

class TrieNode{
    public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
        this->value = val;
        for(int i=0; i<26; i++){
            //at start we are marking all child as null
            children[i] = NULL;
        }
        //initialization
        this->isTerminal = false;
    }
};

//incertion
void insertWord(TrieNode* root, string word){
    cout<<"received word: "<<word<<" for incertion"<<endl;
    //base case
    //string ki length 0
    if(word.length() == 0){
        //root ko terminal mark kar denge
        root->isTerminal = true;
        return;
    }

    char ch = word[0]; 
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        //present 
        child = root->children[index];
    }
    else{
        //absent
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    //baki recursion will handle
    //substr(1) use
    //ek character chod ke baki sab substr ban jayega
    insertWord(child, word.substr(1));
} 

bool searchWord(TrieNode* root, string word){
    //base case
    if(word.length() == 0){
        return root->isTerminal;
    }
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        //child is present or found
        child = root->children[index];
    }
    else{
        //not found
        return false;
    }
    //recursion will handle
    bool recursionKaAns = searchWord(child, word.substr(1));
    return recursionKaAns;
}

void deleteWord(TrieNode* root, string word){
    if(word.length() == 0){
        //terminal ko false mark kar dunga
        root->isTerminal = false;
        return;
    }
    //1 case we will solve
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        //present
        child = root->children[index];//travel
    }
    else{
        //not present
        return;
    }
    //recursion call
    deleteWord(child, word.substr(1));
}

int main(){
    TrieNode* root = new TrieNode('-');

    insertWord(root, "donation");
    insertWord(root, "lover");
    insertWord(root, "love");
    insertWord(root, "load");
    insertWord(root, "lov");
    insertWord(root, "bat");
    insertWord(root, "cat");
    insertWord(root, "car");

     cout<<"Insertion Done"<<endl;
     if(searchWord(root, "love")){
         cout<<"String is Found"<<endl;
     }
     else{
         cout<<"Not found"<<endl;
     }

     deleteWord(root, "love");
     cout<<"After deleting string "<<endl;
     if(searchWord(root, "love")){
         cout<<"String is Found"<<endl;
     }
     else{
         cout<<"Not found"<<endl;
     }
}