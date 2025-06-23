#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

//using template we can write generalize code
//T can be int or char etc.
template<typename T>
class Graph{ 
    public:
    //weight in integer
    unordered_map<T, list<pair<T , int>>> adjList;

    void addEdge(T u, T v, int wt, bool direction){
        //direction = 0, undirected
        //direction = 1, directed graph
        if(direction == 1){
            //u->v
            //u me distance and waight insert karenge
            adjList[u].push_back(make_pair(v, wt));
        }
        else{
            //direction = 0
            //u se v edge hai
            //u se v and v se u jana possible hai
            adjList[u].push_back({v, wt});
            adjList[v].push_back({u, wt});
        }
        printAdjList();
         cout<<endl;
    }

    void printAdjList(){
        for(auto i: adjList){
            cout<<i.first<<": {";
            for(pair<T, int> p: i.second){
                cout<<"{"<<p.first<<", "<<p.second<<"}, ";
            }
            cout<<endl;
        }
    }
};

int main(){
    //here we specifies the typename of T
    Graph<char> g;
    g.addEdge('a','b',5,1);
    g.addEdge('b','c',10,1);
    g.addEdge('b','c',20,1);
    g.addEdge('c','d',50,1);
}