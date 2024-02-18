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
    ll x=a[0];
    for(ll i=1;i<n;i++){
        if(a[i]<=x){
            ll j=2;
            while(a[i]*j<=x){
                // a[i]*=j;
                j++;
            }
            a[i]*=j;
        }
        // cout<<x<<" nn ";
        x=a[i];
    }
    cout<<x<<nl;
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