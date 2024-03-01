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
    ll n=5;
    ll a[n]={1,3,6,10,15};
    ll x;cin>>x;
    ll s=x;
    if(x>100)s=(x)%15;
    // for(ll val:a)cout<<val<<" ";
    // cout<<nl;
    ll dp[n+1][s+1];
    dp[0][0]=0;
    for(ll i=1;i<=s;i++)dp[0][i]=LONG_MAX;
    for(ll i=1;i<=n;i++){
        for(ll j=0;j<=s;j++){
            if(a[i-1]<=j){
                dp[i][j]=min(1+dp[i][j-a[i-1]],dp[i-1][j]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(x>100){
        cout<<dp[n][s]+x/15<<nl;
    }
    else cout<<dp[n][s]<<nl;
    
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