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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=1;i<n-1;i++){
        if(a[i-1]!=0){
            ll x=a[i-1];
            a[i-1]-=abs(x);
            a[i]-=abs(2*x);
            a[i+1]-=abs(x);
        }
        // cout<<a[i]<<" n ";
    }
    // for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    ll ok=1;
    for(ll i=0;i<n;i++){
        if(a[i]!=0){
            ok=0;
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