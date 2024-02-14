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
    map<pii,ll>mp;
    for(ll i=0;i<n;i++){
        ll lagbe1=x-(a[i]%x);
        if(a[i]%x==0)lagbe1=0;
        ll lagbe2=a[i]%y;
        if(mp.find({lagbe1,lagbe2})!=mp.end()){
            ans+=mp[{lagbe1,lagbe2}];
        }
        mp[{a[i]%x,a[i]%y}]++;
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