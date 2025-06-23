#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjList;
    //used to add new edge
    void addEdge(int u, int v, bool direction){
        //direction=0, undirected
        //direction=1, directed
        if(direction == 1){
            //u se v ki taraf ek edge hai
            //u->v
            //adjList of u me v ko insert kar dia
            adjList[u].push_back(v);
        }
        else{
            //undirected
            //direction = 0
            //u -- v
            //u->v
            adjList[u].push_back(v);
            //v->u
            adjList[v].push_back(u);
        }
        cout<<endl<<"printing adjList"<<endl;
        printAdjList();
        cout<<endl;
    }
    void printAdjList(){
        for(auto i: adjList){
            cout<<i.first<<"-> {";
            for(auto neighbour: i.second){
                cout<<neighbour<<", ";
            }
            cout<<"}"<<endl;
        }
    }
}; 

int main(){
    Graph g;
    //0 se 1 directed edge hai
    g.addEdge(0,1,1);
    //1 se 2 directed edge hai
    g.addEdge(1,2,1);
    //1 se 3 directed edge hai
    g.addEdge(1,3,1);
    //2 se 3 directed edge hai
    g.addEdge(2,3,1);
    // also check for undirected g.addEdge(1,2,0);
}