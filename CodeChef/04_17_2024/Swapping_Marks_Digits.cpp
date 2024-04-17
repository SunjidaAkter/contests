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
ll rev(ll n) {
    return (n % 10) * 10 + (n / 10);
}

void solve(){
    ll x,y;cin>>x>>y;
    if(rev(x)>y)Yes;
    else if(x>y)Yes;
    else if(x>rev(y))Yes;
    else if(rev(x)>rev(y))Yes;
    else No;
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