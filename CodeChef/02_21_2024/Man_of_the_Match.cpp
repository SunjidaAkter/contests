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
    ll n=22;
    vector<pii>a(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        a[i]={x,y};
    }
    ll mx=0,ans=0;
    for(ll i=0;i<n;i++){
        if(mx<(a[i].first+20*a[i].second)){
            mx=(a[i].first+20*a[i].second);
            ans=i+1;
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