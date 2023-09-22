#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];
void bfs(int s){
    queue<int>q;
    q.push(s);
    visited[s]=true;
    level[s]=0;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            // cout<<visited[v]<<" ";
            if(visited[v])continue;
            q.push(v);
            level[v]=level[u]+1;
            visited[v]=true;
        }
    }
}
int main(){
    int m,n;cin>>n>>m;
    for(int i=1;i<=m;i++){
        int u,v;cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x,y,k;cin>>x>>y>>k;
    bfs(x);
    vector<int>v1;
    // for (int i = 0; i < n; ++i) {
    //     if (level[i] == k) {
    //         v1.push_back(i);
    //     }
    // }
    for (int i = 0; i < n; ++i) {
        for(int j=1;j<=k;j++){

            if (level[i] == j) {
                v1.push_back(i);
            }
        }
    }
    // sort(v.begin(),v.end());
    for (int i = 0; i <= N; i++) {
            visited[i] = false; 
            level[i]=0;
    }
    bfs(y);
    vector<int>v2;
    for (int i = 0; i < n; ++i) {
        for(int j=1;j<=k;j++){

            if (level[i] == j) {
                v2.push_back(i);
            }
        }
    }
    vector<int>v3;
    set<int>ss;
    for(int i=0;i<v1.size();i++){
        v3.push_back(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        v3.push_back(v2[i]);
    }
    for(int i=0;i<v1.size();i++){
        ss.insert(v1[i]);
    }
    for(int i=0;i<v2.size();i++){
        ss.insert(v2[i]);
    }
    if(v3.size()==ss.size())cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}