#include<bits/stdc++.h>
using namespace std;

class Graph {
    public:
    unordered_map<int, list<int>> adjList;

void addEdge(int u, int v, bool direction){
    if(direction == 0){ // undirected edge
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    else{ // directed edge
        adjList[u].push_back(v);
    }
}


    // void printAdjList(){
    //    for(auto &i : adjList){
    //     cout<<i.first<< "-> ";
    //     for(auto &j : i.second){
    //         cout<<"{"<<j.first<<", "<<j.second<<"},";
    //     }
    //     cout << endl;
    //    } 
    // }

    //     // printing distance array
    //     for(int i=0; i<n; ++i){
    //         for(int j=0; j<n; ++j){
    //             cout<< dist[i][j] << " ";
    //         }
    //         cout<<endl;
    //     }
    // }
    // kossaRahu algorithm is used in a graph
    // where we can go from each node to another node
    // get strongly connected component
    int kossaRaju(int n){
        // step 1: get the Ordering
        stack<int> ordering;
        unordered_map<int, bool> vis;

        for(int i=0; i<n; ++i){
            if(!vis[i]){
                dfs1(i, ordering, vis);
            }
        }

        // step 2: Reverse edges
        unordered_map<int, list<int>> adjNew;
        for(auto &a : adjList){
            for(auto &b : a.second){
                int u = a.first;
                int v = b;
                // v -> u ki entry create karni hai
                adjNew[v].push_back(u);
            }
        }

        // step 3 : Traverse using ordering & count components
        int count = 0;
        unordered_map<int, bool> vis2;

        while(!ordering.empty()){
            int node = ordering.top();
            ordering.pop();
            if(!vis2[node]){
                cout<<"SCC #"<<count+1<<" : ";
                dfs2(node, vis2, adjNew);
                count++;
                cout<<endl;
            }
        }
        return count;
    }

    void dfs1(int node, stack<int> &ordering, unordered_map<int, bool> &vis){
        vis[node] = true;
        for(auto nbr : adjList[node]){
            if(!vis[nbr]){
                dfs1(nbr, ordering, vis);
            }
        }
        // wapas aate hue stack me push
        ordering.push(node);
    }

    void dfs2(int src, unordered_map<int, bool> &vis2, unordered_map<int, list<int>> & adjNew){
        vis2[src] = true;
        cout<<src<<": ";

        for(auto nbr : adjNew[src]){
            if(!vis2[nbr]){
                dfs2(nbr, vis2, adjNew);
            }
        }
    }

};


int main(){
    Graph g;

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 0, 1);
    g.addEdge(2, 4, 1);
    g.addEdge(4, 5, 1);
    g.addEdge(5, 6, 1);
    g.addEdge(6, 4, 1);
    g.addEdge(6, 7, 1);

    cout << "Number of Strongly Connected Components: "
     << g.kossaRaju(8) << endl;
    
} 