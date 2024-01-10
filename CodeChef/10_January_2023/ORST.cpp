#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(b,b+m);
    ll x=b[m-1];
    vector<ll>pre;
    vector<ll>suf;
    for(ll i=0;i<(n-x);i++){
        pre.push_back(a[i]);
    }
    for(ll i=(n-x);i<n;i++){
        suf.push_back(a[i]);
    }
    sort(all(suf));
    for(ll val:pre)cout<<val<<" ";
    for(ll val:suf)cout<<val<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}