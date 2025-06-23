#include<iostream>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u,int v, bool direction){
        //direction 0->undirecetd
        //direction 1->directed
        if(direction == 1){
            adj[u].push_back(v);
        }
        else{
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<" ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void topoSortDfs(int src, map<int,bool>& visited, stack<int> &st){
        visited[src] = true;
        for(auto nbr: adj[src]){
            for(auto nbr: adj[src]){
                if(!visited[nbr]){
                    //neighbour isn't visited; dfs call
                    topoSortDfs(nbr, visited, st);
                }
            }
            //har call se wapas aate hue stack me insert karna hai
            st.push(src);
        }
    }
    void topoSortBfs(){
        queue<int> q;
        map<int,int> indegree;
        for(auto i: adj){
            for(auto nbr: i.second){
                indegree[nbr]++;
            }
        }
        for(auto i: indegree){
            cout<<i.first<<"->"<<i.second;
        }
    }

};
int main(){
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    g.addEdge(3,4,1);
    g.addEdge(3,5,1);
    g.addEdge(4,6,1);
    g.addEdge(5,6,1);
    g.addEdge(6,7,1);
    g.printAdjList();

    int n = 8;
    map<int,bool> visited;
    stack<int> st;
    for(int node =0; node<n; node++){
        if(!visited[node]){
            g.topoSortDfs(node,visited,st);
        }
    }
    cout<<"Printing the topo order:"<<endl;
    while(!st.empty()){
        cout<<st.top();
        st.pop();  
    }
}