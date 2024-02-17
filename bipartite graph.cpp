#include <bits/stdc++.h>
using namespace std;

vector<int>g[1001];
bool vis[1001];
int color[1001];

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
    cout<<dfs(0)<<endl;
    return 0;
}



