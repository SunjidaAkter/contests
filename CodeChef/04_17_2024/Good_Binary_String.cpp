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
    string s;cin>>s;
    vector<pair<ll,char>>v;
    ll ans=0;
    for(ll i=1;i<n;i++){
        if(s[i]!=s[i-1]&& i%2==1){
            ans++;
            v.push_back({i+1,s[i]});
        }
    }
    for(ll i=1;i<v.size();i++){
        if(v[i].second==v[i-1].second){
            if(v[i].second=='0'){v[i].second='1';v[i].first-=1;}
            else {v[i].second='0';v[i].first-=1;}
        }
    }
    cout<<ans<<nl;
    for(ll i=0;i<v.size();i++){
        cout<<v[i].first<<" ";
    }
    cout<<nl;
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