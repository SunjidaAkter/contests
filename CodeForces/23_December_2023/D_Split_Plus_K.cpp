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
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll pos=0,neg=0;
    sort(a,a+n);
    if(a[0]==a[n-1]){
        cout<<0<<nl;
        return;
    }
    ll g=0;
    for(ll i=0;i<n;i++){
        a[i]-=k;
        if(a[i]>0)pos++;
        else if(a[i]<0)neg++;
        g=__gcd(g,abs(a[i]));
    }
    if(pos!=n&&neg!=n){
        cout<<-1<<nl;
        return;
    }
    if(neg==n)g=-g;
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+=((a[i]/g)-1);
    }
    cout<<ans<<nl;
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