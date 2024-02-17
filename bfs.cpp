#include <bits/stdc++.h>
using namespace std;

vector<int>g[1001];
bool vis[1001];
int level[1001];

void bfs(int src){
    queue<int>q;
    q.push(src);
    level[src]=0;
    vis[src]=true;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        for(int i =0;i<g[par].size();i++){
            if(!vis[g[par][i]]){
                q.push(g[par][i]);
                vis[g[par][i]]=true;
                level[g[par][i]] =level[par]+1;
            }
        }
    }

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
        g[v].push_back(u);
    }
    bfs(0);
    for(i=0;i<n;i++){
        cout<<level[i]<<endl;
    }
    return 0;
}



