#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool vis[1000001];
int par[1000001];
int dist[1000001];
vector<int> adj[100001];

int main(){


    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= m ;i++){
        int u ,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    queue<int> Q;
    Q.push(1);
    vis[1] = true;
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for(int v : adj[u]){
            if(vis[v] == false){
                vis[v] = true;
                par[v] = u;
                dist[v] = dist[u] + 1;
                Q.push(v);
            }
        }

    }

    if(vis[n] == false){
        cout<<"IMPOSSIBLE";
    }
    else{
        int cur = n;
        vector<int>path;
        while (cur != 1)
        {
            /* code */
            path.push_back(cur);
            cur = par[cur];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        cout<<path.size()<<endl;
        for(int i : path){
            cout << i <<" ";
        }

    }

}
