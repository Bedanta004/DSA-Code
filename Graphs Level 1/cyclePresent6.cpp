#include<iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjList;
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

    bool checkCycleUndirectedBFS(int src){
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;
        //initial state
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            //child nikalo
            for(auto nbr: adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr]= frontNode;
                }
                else if(visited[nbr] == true && nbr != parent[frontNode]){
                    //cycle present
                    return true;
                }
            }
        }
        //cycle not present
        return false;
    }
};

int main(){
    Graph g;
    //undirected graph
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(2,4,0);
    g.addEdge(3,4,0);
    g.addEdge(2,5,0);

    //source node
    int src = 0;

    bool isCyclic = g.checkCycleUndirectedBFS(src);
    if(isCyclic){
        cout<<"Cycle is present";
    }
    else{
        cout<<"Cycle is not present";  
    }
}