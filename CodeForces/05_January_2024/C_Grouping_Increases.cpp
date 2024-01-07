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
    vector<ll>v1,v2;
    v1.push_back(a[0]);
    ll ans=0;
    for(ll i=1;i<n;i++){
        if((!v2.empty())&&(a[i]<=v1.back()&&a[i]<=v2.back())){
            if(v1.back()<=v2.back())v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }else if((!v2.empty())&&(a[i]>v1.back()&&a[i]>v2.back())){
            if(v1.back()<=v2.back())v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }else if(a[i]<=v1.back())v1.push_back(a[i]);
        else if(a[i]>v1.back())v2.push_back(a[i]);
    }
    for(ll i=1;i<v1.size();i++){
        if(v1[i-1]<v1[i])ans++;
    }
    for(ll i=1;i<v2.size();i++){
        if(v2[i-1]<v2[i])ans++;
    }
    // for(ll val:v1)cout<<val<<" ";
    // cout<<nl;
    // for(ll val:v2)cout<<val<<" ";
    // cout<<nl;
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
