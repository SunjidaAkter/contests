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
    ll ans=0,th=0;
    bool f=0;
    for(ll i=0;i<n-1;i++){
        if(s[i]=='.')continue;
        if(s[i]=='@'){
            ans++;
        }
        if(s[i]=='*'){
            th++;
        }
        if(th==1){
            if(s[i+1]=='*'){
                f=1;
                break;
            }else{
                th=0;
            }
        }
    }
    if(f)cout<<ans<<nl;
    else if(s[s.size()-1]=='@')cout<<ans+1<<nl;
    else cout<<ans<<nl;
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