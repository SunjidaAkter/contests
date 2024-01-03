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
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(all(a));
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    sort(all(b));
    reverse(all(a));
    bool f=1;
    for(ll i=1;i<n;i++){
        if((a[i]+b[i])!=(a[i-1]+b[i-1])){
            f=0;break;
        }
    }
    if(f){
        for(ll val:a)cout<<val<<" ";
        cout<<nl;
        for(ll val:b)cout<<val<<" ";
        cout<<nl;
    }else cout<<-1<<nl;
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