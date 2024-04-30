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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,LONG_MAX));
    ll ans=LONG_MAX;
    for(ll i=0;i<=k;i++)dp[0][i]=0;
    for(ll pos=1;pos<=n;pos++){
        for(ll j=0;j<=k;j++){
            ll mn=LONG_MAX;
            for(ll prev=pos;pos-prev<=j&&prev>0;prev--){
                mn=min(mn,a[prev-1]);
                ll x=(pos-prev+1)*mn;
                x+=dp[prev-1][j-(pos-prev)];
                dp[pos][j]=min(dp[pos][j],x);
            }
        }
    }
    for(ll j=0;j<=k;j++){
        ans=min(ans,dp[n][j]);
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