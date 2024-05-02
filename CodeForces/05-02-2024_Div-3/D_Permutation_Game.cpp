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
    ll n,k,pb,ps;cin>>n>>k>>pb>>ps;
    ll a[n],p[n];
    for(ll i=0;i<n;i++)cin>>p[i];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll c1=0,c2=0;
    for(ll i=0;i<k;i++){
        c1+=a[pb-1];
        c2+=a[ps-1];
        if(a[p[pb-1]-1]>a[pb-1])pb=p[pb-1]-1;
        if(a[p[ps-1]-1]>a[ps-1])ps=p[ps-1]-1;
    }
    cout<<c1<<nl;
    // if(c1>c2)cout<<"Bodya"<<nl;
    // else if(c1<c2)cout<<"Sasha"<<nl;
    // else cout<<"Draw"<<nl;
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