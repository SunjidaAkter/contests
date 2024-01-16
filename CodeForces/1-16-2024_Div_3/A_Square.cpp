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
    set<ll>st1;
    set<ll>st2;
    for(ll i=0;i<4;i++){
        ll x,y;cin>>x>>y;
        st1.insert(x);
        st2.insert(y);
    }
    vector<ll>x;
    vector<ll>y;
    while(!st1.empty()){
        x.push_back(*st1.begin());
        st1.erase(st1.begin());
    }
    while(!st2.empty()){
        y.push_back(*st2.begin());
        st2.erase(st2.begin());
    }
    cout<<abs(x[0]-x[1])*abs(y[0]-y[1])<<nl;
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