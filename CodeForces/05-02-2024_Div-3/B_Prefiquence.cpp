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
    ll n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    ll ans=0,j=0,mx=0;bool tr=0;
    for(ll i=0;i<m;i++){
        if(s1[j]==s2[i]&&j<n){
            // tr=1;
            ans++,j++;
        // }else if(s1[j]==s2[i]&&tr){
            // ans++,j++;
        }else if(j<n){
            // tr=0;
            mx=max(mx,ans);
            // ans=0;
            // j++;
        }else break;
    }
    mx=max(mx,ans);
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