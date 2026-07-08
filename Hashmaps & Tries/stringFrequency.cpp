#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

int main() {
    string str = "he is a bad and very bad and good is good";
    unordered_map<string, int> wordCount;
    
    stringstream ss(str);
    string word;
    
    while (ss >> word) {
        wordCount[word]++;
    }
    
    for (auto &pair : wordCount) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
