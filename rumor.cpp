#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool vis[100000];

vector<int> adj[100001];
int cost[1000001];
long long int ans = 0;
int cur_min = 1000000;


void dfs(int u){
    vis[u] = true;
    cur_min = min(cur_min,cost[u]);
    for(int v:adj[u]){
        if(vis[v] == 0){
            dfs(v);
        }
    }



}

int main(){
    int n , m;
     cin >> n >> m;
     for(int i = 1;i <= n;i++){
        cin >> cost[i];
     }
     for(int i = 1;i <= m;i++){
        int u ,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }

     for(int i = 1; i <= n;i++){
        if(vis[i] == 0){
            cur_min = cost[i];
            dfs(i);
            ans += cur_min;


        }
     }

     cout << ans<<endl;




}




