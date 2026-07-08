#include<iostream>
#include<vector>
using namespace std;

class TrieNode{
    public:
    char value;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char val){
        this->value = val;
        for(int i=0; i<26; i++){
            children[i] = NULL;
        }
        //initialization
        this->isTerminal = false;
    }
};

//incertion
void insertWord(TrieNode* root, string word){
   
    //base case
    if(word.length() == 0){
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
        //present or found
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
        root->isTerminal = false;
        return;
    }
    //1 case we will solve
    char ch = word[0];
    int index = ch - 'a';
    TrieNode* child;

    if(root->children[index] != NULL){
        //present
        child = root->children[index];
    }
    else{
        //not present
        return;
    }
    //recursion call
    deleteWord(child, word.substr(1));
}

void storeString(TrieNode* root, vector<string> &ans, string &input, string& prefix){
    //base case
    if(root->isTerminal == true){
        //ans store
        //original string is also added
        //check copy
        ans.push_back(prefix + input);
        //return?? is not required
    }
    for(char ch='a'; ch <= 'z'; ch++){
        //index of character
        int index = ch - 'a';
        TrieNode* next = root->children[index];
        if(next != NULL){
            //child exist, stored
            input.push_back(ch);
            //baki recursion karega
            storeString(next, ans, input, prefix);
            //backtrack
            input.pop_back();
        }
    }
}

void findPrefixString(TrieNode* root, string input, vector<string>& ans, string &prefix){
    //base case
    if(input.length() == 0){
        TrieNode* lastchar = root;
        storeString(lastchar, ans, input, prefix);
        return;
    }
    char ch = input[0];
    int index = ch - 'a';
    TrieNode* child;
    if(root->children[index] != NULL){
        //child is present
        child = root->children[index];
    }
    else{
        //child doesn't exist
        return;
    }
    //recursive call
    findPrefixString(child, input.substr(1), ans, prefix);
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
    insertWord(root, "cater");

    string input = "c";
    string prefix = input;
    vector<string> ans;

    // Find words with prefix
    findPrefixString(root, input, ans, prefix);

    // Print suggestions
    for(auto i: ans){
        cout << i << ",";
    }
    cout << endl;

    return 0;
}
