#include <bits/stdc++.h>
using namespace std;

vector<int>g[1001];
bool vis[1001];
stack<int>s;

void dfs(int vertex){
    vis[vertex] = true;
    for(int i=0;i<g[vertex].size();i++){
        if(vis[g[vertex][i]]==false){
            dfs(g[vertex][i]);
        }
    }
    s.push(vertex);
}

int main() {
    int n,m,i;
    cout<<"No of Nodes and edges: ";
    cin>>n>>m;
    cout<<"Edges: ";
    for(i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
    }
    for(i=0;i<n;i++){
        if(vis[i]==false){
            dfs(i);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}


