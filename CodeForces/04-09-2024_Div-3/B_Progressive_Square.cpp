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
    ll n,c,d;cin>>n>>c>>d;
    ll a[n*n];
    for(ll i=0;i<n*n;i++)cin>>a[i];
    sort(a,a+n*n);
    ll x=a[0];
    ll y=a[0];
    vector<ll>v;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            v.push_back(x);
            x+=d;
        }
        x=y+c;
        y+=c;
    }
    sort(all(v));
    bool ok=true;
    for(ll i=0;i<n*n;i++){
        if(a[i]!=v[i]){
            ok=false;
            break;
        }
    }
    if(ok)yes;
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