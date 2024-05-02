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
    vector<ll>a(n-1);
    ll s=0;
    for(ll i=0;i<n-1;i++){cin>>a[i];s+=a[i];}
    if(n==2){
        cout<<a[0]+1<<" "<<a[0]<<nl;
        return;
    }
    ll x=a[n-2];
    vector<ll>v;
    v.push_back(s+1);
    for(ll i=1; i<n; i++){
        v.push_back(v.back()+a[i-1]);
    }
    for(ll val:v)cout<<val<<" ";
    cout<<nl;
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