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
    vector<ll>v;
    for(ll i=0;i<31;i++){
        if(((1<<i)&n))v.push_back(1);
        else v.push_back(0);
    }
    ll sum=0;
    reverse(all(v));
    for(ll val:v)cout<<val;
    for(ll i=1;i<v.size()-1;i++){
        if(v[i]==0){
            if(v[i-1]==1&&v[i+1]==1){
                sum+=pow(2,i+1);
            }
        }
    }
    cout<<nl;
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