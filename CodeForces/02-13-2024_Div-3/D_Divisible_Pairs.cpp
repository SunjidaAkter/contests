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
    ll n,x,y;cin>>n>>x>>y;
    ll a[n],ans=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[(a[i]%x)]++;
    }
    vector<pii>vp;
    for(ll i=0;i<n;i++){
        // cout<<(a[i]%x)<<" ";
        if(a[i]>x)if(mp[n-(a[i]%x)]>0)v.push_back(a[i]);
    }
    for(ll val:v)cout<<val<<" ";
    for(ll i=0;i<v.size();i++){
        for(ll j=i+1;j<v.size();j++){
            if(abs(a[i]-a[j])%y==0)ans++;
        }
    }
    cout<<ans<<nl;
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