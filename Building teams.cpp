#include<iostream>
#include<bits/stdc++.h>

using namespace std;
const int N = 1e6;
bool vis[N],col[N];
vector <int>adj[N];
bool bi_colorable;

void dfs(int u,bool curcolor){
    vis[u] = true;
    col[u] = curcolor;
    for(int v:adj[u]){
        if(vis[v] == 0){
            dfs(v,!curcolor);
        }
        else{
            if(col[u] == col[v]){
                bi_colorable = false;
            }
        }
    }

}

int main(){
    int n , m;
    cin >> n >> m;
    for(int i = 1;i <= m;i++){
        int u ,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bi_colorable = true;
    for(int i = 1;i <=n;i++ ){
        if(vis[i] == 0){
            dfs(i,1);
        }

    }
    if(bi_colorable == false){
        cout<<"IMPOSSIBLE"<<endl;
    }
    else{
        for(int i = 1; i <= n;i++){
            cout<<col[i]+1 <<" ";
        }
    }


}


