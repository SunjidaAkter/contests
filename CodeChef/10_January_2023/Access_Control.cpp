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
    string s;cin>>s;
    if(s[0]=='0'){
        no;return;
    }
    ll cnt=0,mx=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0')cnt++;
        else{
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    mx=max(mx,cnt);
    if(mx<=k)yes;
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