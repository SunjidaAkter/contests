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
    ll n,q;cin>>n>>q;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=(2*a[i]);
    while(q--){
        ll x;cin>>x;
        ll y,z;
        ll yi,zi;
        bool f=0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(x==(sum-a[i]-a[j])){
                    yi=i,zi=j;
                    y=a[i],z=a[j];
                    f=1;break;
                }
            }
        }
        if(f){
            cout<<y<<" ";
            for(ll i=0;i<n;i++){
                if(i==yi||i==zi)continue;
                cout<<a[i]<<" ";
            }
            cout<<z<<nl;
            // cout<<yi<<" b "<<zi;
            // cout<<nl;
        }else cout<<-1<<nl;
    }
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