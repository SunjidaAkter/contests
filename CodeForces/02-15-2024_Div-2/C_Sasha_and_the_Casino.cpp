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
    ll k,x,a;cin>>k>>x>>a;
    ll y=0,f=1;
    for(ll i=0;i<x;i++){
        ll y1=(y/(k-1))+1;
        y+=y1;
        if(y>a)f=0;
    }
    if(f&&(a-y)*k>a)yes;
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