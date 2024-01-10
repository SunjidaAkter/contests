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
    ll cnt=0;
    if(n%2==1){
        cout<<0<<nl;
        return;
    }
    while(__builtin_popcount(n)>1){
        ll x=__builtin_ctz(n);
        n-=(1<<x);
    }
    while(n>1){
        n/=2;
        cnt++;
    }
    // ll c=0
    // while(cnt>1){
    //     cnt/=2;
    //     c++;
    // }
    cout<<cnt/4<<nl;
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