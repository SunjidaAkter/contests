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
    vector<ll>l(n);
    vector<ll>r(n);
    vector<ll>c(n);
    for(ll i=0;i<n;i++)cin>>l[i];
    for(ll i=0;i<n;i++)cin>>r[i];
    for(ll i=0;i<n;i++)cin>>c[i];
    set<ll>st(all(l));
    sort(all(r));
    sort(all(c));
    reverse(all(c));
    ll ans=0;
    vector<ll>interval;
    for(ll i=0;i<n;i++){
        auto it=st.lower_bound(r[i]);
        it--;
        interval.push_back(r[i]-(*it));
        st.erase(it);
    }
    sort(all(interval));
    for(ll i=0;i<n;i++){
        ans+=(c[i]*interval[i]);
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