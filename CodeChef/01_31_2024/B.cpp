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
    ll n,k;cin>>n>>k;
    ll a[n],mn=LONG_MAX;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++){
        if(a[i]>=k)mn=min(mn,a[i]%k);
    }
    if(mn==LONG_MAX)cout<<-1<<nl;
    else cout<<mn<<nl;
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