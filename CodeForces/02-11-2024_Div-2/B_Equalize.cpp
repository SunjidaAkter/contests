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
    vector<ll>a(n);
    ll mx=0,j=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    a.erase(unique(all(a)),a.end());
    for(ll i=0;i<a.size();i++){
        while(j<a.size()&&a[j]-a[i]<n)j++;
        mx=max(mx,j-i);
    }
    cout<<mx<<nl;
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