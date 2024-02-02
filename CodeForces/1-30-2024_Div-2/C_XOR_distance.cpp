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
    ll a,b,r;cin>>a>>b>>r;
    if(a<b)swap(a,b);
    ll start=0;
    ll x=0,y=0,ok=0;
    for(ll i=60;i>=0;i--){
        ll abit=0,bbit=0;
        if(a&(1ll<<i))abit=1;
        if(b&(1ll<<i))bbit=1;
        if((abit==bbit)&&(r&(1ll<<i)))ok=1;
        if(abit==bbit)continue;
        if(start==0){
            start=1;
            x+=(1ll<<i);
            if(r&(1ll<<i))ok=1;
        }else{
            if(abit==0&&bbit==1){
                y+=(1ll<<i);
                if(r&(1ll<<i))ok=1;
            }else{
                if((r&(1ll<<i))||ok)y+=(1ll<<i);
                else{
                    x+=(1ll<<i);
                    if(r&(1ll<<i))ok=1;
                }
            }
        }
    }
    cout<<x-y<<nl;
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