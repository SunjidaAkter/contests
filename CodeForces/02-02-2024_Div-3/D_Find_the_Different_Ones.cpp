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
    ll a[n];
    for (ll i = 0; i < n; i++)cin>>a[i];
    vector<ll>v(n);
    v[n - 1] = n;
    for (ll i = n - 2; i > -1; i--) {
        if (a[i] == a[i + 1])v[i] = v[i + 1];
        else v[i] = i + 1;
    }
    ll q; cin >> q;
    while(q--){
        ll l, r; cin >> l >> r;
        l--, r--;
        if (v[l] > r)cout << -1 <<" "<< -1 << nl;
        else cout << l + 1 << " " << 1 + v[l] << nl;
    }
    cout <<nl;
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