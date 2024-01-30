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
    ll a,b,x;cin>>a>>b>>x;
    if(a<b)swap(a,b);
    ll ans=a-b,cnt=0,mnn=ans;
    for(ll i=60;i>=0;i--){
        if(((b>>i)&1)==0&&((a<<i)&1)==1&&cnt+(1ll<<i)<=x){
            if(ans>=2*(1ll<<i)){
                cnt+=(1ll<<i);ans-=2*(1ll<<i);
            }else mnn=min(mnn,2*(1ll<<i)-ans);
        }
    }
    cout<<min(ans,mnn)<<nl;
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