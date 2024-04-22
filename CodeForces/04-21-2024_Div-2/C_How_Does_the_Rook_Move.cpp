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
const ll mod=1e9+7;
ll rec(ll n,vector<ll>&dp){
    if(n<=1)return 1;
    if(dp[n]!=-1)return dp[n];
    dp[n]=(rec(n-1,dp)%mod+(((n-1)%mod*rec(n-2,dp)%mod)%mod*2)%mod)%mod;
    return dp[n];
}
void solve(){
    ll n,k;cin>>n>>k;
    set<ll>st;
    for(ll i=0;i<k;i++){
        ll x,y;cin>>x>>y;
        st.insert(x);
        st.insert(y);
    }
    vector<ll>dp(n+1,-1);
    ll ans=rec(n-st.size(),dp);
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