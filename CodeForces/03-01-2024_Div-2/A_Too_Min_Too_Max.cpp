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
    for(ll i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    sort(a,a+n);
    vector<ll>v;
    v.push_back(a[0]);
    v.push_back(a[n-1]);
    v.push_back(a[1]);
    v.push_back(a[n-2]);
    sum=abs(v[0]-v[1])+abs(v[1]-v[2])+abs(v[2]-v[3])+abs(v[3]-v[0]);
    cout<<sum<<nl;
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