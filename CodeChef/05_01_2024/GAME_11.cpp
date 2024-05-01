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
    ll m,n;cin >> m >> n;
    vector<ll>a(m);
    vector<ll>b(n);
    for(ll i=0;i<m;i++)cin >> a[i];
    for(ll i=0;i<n;i++)cin >> b[i];
    if(m<4||n<4){
        cout<<-1<<nl;
        return;
    }
    sort(all(a));
    sort(all(b));
    // reverse(all(a));
    // reverse(all(b));
    ll ans=0;
    for(ll i=0;i<4;i++){
        ans+=a.back();
        a.pop_back();
        ans+=b.back();
        b.pop_back();
    }
    // for(ll val:a)cout<<val<<" ";
    // cout<<nl;
    // for(ll val:b)cout<<val<<" ";
    // cout<<nl;
    vector<ll>v;
    for(ll i=0;i<a.size();i++){
        v.push_back(a[i]);
        // a.pop_back();
    }
    for(ll i=0;i<b.size();i++){
        v.push_back(b[i]);
        // b.pop_back();
    }
    sort(all(v));
    // for(ll val:v)cout<<val<<" ";
    // cout<<nl;
    if(v.size()<3){
        cout<<-1<<nl;
        return;
    }
    sort(all(v));
    reverse(all(v));
    for(ll i=0;i<3;i++){
        ans+=v[i];
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