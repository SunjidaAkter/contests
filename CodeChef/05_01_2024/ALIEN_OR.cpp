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
    ll n,k;cin>>n>>k;
    vector<bool>v(k+1,0);
    for(ll i=0;i<n;i++){
        string str;cin>>str;
        ll cnt=0,flag=-1;
        for(ll j=0;j<k;j++){
            if(str[j]=='1'){
                cnt++;
                flag=j+1;
            }
        }
        if(cnt==1){
            v[flag]=1;
        }
    }
    bool f=1;
    for(ll i=1;i<=k;i++){
        if(!v[i])f=0;
    }
    if(f)yes;
    else no;
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