#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;


#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);





int main(){
    Faster;
    int t;                  cin>>t;
    while(t--){
        int n,q;            cin>>n>>q;
        vector<ll> a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<ll> pref(n+2,0);
        for(int i=1;i<=n;i++){
            pref[i]=(a[i]+pref[i-1]);
        }
        vector<ll> ans(q);
        vector<pair<ll,int>> k(q);
        for(int i=0;i<q;i++){
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        int AP=0;
        for(int i=0;i<q;i++){
            while(true){
                if(AP==n or a[AP+1]>k[i].first)break;
                AP++;
            }
            ans[k[i].second]=pref[AP];
        }

        for(int i=0;i<q;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}




