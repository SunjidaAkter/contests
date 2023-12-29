#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,ans=0;cin>>n;
    vector<pii>v;
    vector<ll>st;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    vector<ll>stw;
    sort(all(v));
    for(ll i=0;i<n;i++){
        st.push_back(v[i].second);
        stw.push_back(v[i].second);
    }
    sort(all(stw));
    for(ll i=0;i<n;i++){
        ll x=st[i];
        ll k=lower_bound(stw.begin(), stw.end(), x) - stw.begin();
        ans+=k;
        stw.erase(stw.begin()+k);
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}