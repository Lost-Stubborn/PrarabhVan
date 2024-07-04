#include <bits/stdc++.h>
using namespace std;

class Graph {
    int v,n;
    vector<int> adj[1000];
public:
    Graph(int v, int n){
        this->v = v;
        this->n = n;
    }

    void createGraph() {
        // cout << "Enter no. of Edges" << endl;
        // cin >> n;
        for(int i=1;i<=n;i++) {
            int u,v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }

    void display() {
        for(int i=1;i<=n;i++) {
            cout << i << " -> ";
            for(auto it : adj[i]){
                cout << it << ",";
            }
            cout << endl;
        }
    }
};



int main() {
    Graph ob(5,6);
    return 0;
}