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
    ll n,m,k;cin>>n>>m>>k;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        a[i]=0;
    }
    a[k-1]=1;
    while(m--){
        ll x;cin>>x;
        char c;cin>>c;
        for(ll i=0;i<n;i++){
            b[i]=0;
        }
        for(ll i=0;i<n;i++){
            if(a[i]==0)continue;
            if(c=='?'||c=='0')b[(i+x)%n]=1;
            if(c=='?'||c=='1')b[(n+(i-x))%n]=1;
        }
        a=b;
    }
    ll cnt=0;
    for(ll val:a)if(val==1)cnt++;
    cout<<cnt<<nl;
    for(ll i=0;i<n;i++){
        if(a[i])cout<<i+1<<" ";
    }
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