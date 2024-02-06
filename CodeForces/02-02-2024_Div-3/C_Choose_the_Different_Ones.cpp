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
    ll n,m,k;cin>>n>>m>>k;
    ll a[n],b[m];
    set<ll>s1,s2;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s1.insert(a[i]);
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        s2.insert(b[i]);
    }
    vector<ll>v1,v2;
    for(ll i=1;i<=k;i++){
        if(s1.find(i)==s1.end()){
            v1.push_back(i);
        }
        if(s2.find(i)==s2.end()){
            v2.push_back(i);
        }
    }
    bool f=1;
    for(ll i=0;i<v1.size();i++){
        if(s2.find(v1[i])==s2.end())f=0;
    }
    for(ll i=0;i<v2.size();i++){
        if(s1.find(v2[i])==s1.end())f=0;
    }
    if(v1.size()>(k/2)||v2.size()>(k/2))f=0;
    if(f)yes;
    else no;
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