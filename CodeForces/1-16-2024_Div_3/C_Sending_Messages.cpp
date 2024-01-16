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
    ll n,f,a,b;cin>>n>>f>>a>>b;
    ll v[n];
    for(ll i=0;i<n;i++)cin>>v[i];
    if(v[0]*a<=b)f-=(v[0]*a);
    else f-=b;
    for(ll i=1;i<n;i++){
        if((v[i]-v[i-1])*a<=b)f-=((v[i]-v[i-1])*a);
        else f-=b;
    }
    if(f>0)yes;
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