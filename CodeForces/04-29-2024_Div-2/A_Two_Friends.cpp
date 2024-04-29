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
    ll n;cin>>n;
    vector<pii> v(n);
    for(ll i=0; i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    ll cnt=0;
    for(ll i=0; i<n;i++){
        for(ll j=0;j<n;j++){
            if(v[i].first==v[j].second&&v[j].first==v[i].second)cnt++;
        }
    }
    if(cnt>=1)cout<<2<<nl;
    else cout<<3<<nl;
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