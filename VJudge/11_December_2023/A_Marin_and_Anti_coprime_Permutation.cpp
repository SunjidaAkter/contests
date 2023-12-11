#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
const ll mod=998244353;
ll factorial(ll n){
    ll f = 1;
    for (int i=1; i<=n; ++i){
        f *= i;
        f %= mod;

    }
    return f;
}
void solve(){
    ll n;cin>>n;
    if(n%2)cout<<0<<nl;
    else {
        n/=2;
        ll x=factorial(n);
        ll ans=x*x;
        ans%=mod;
        cout<<ans<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}