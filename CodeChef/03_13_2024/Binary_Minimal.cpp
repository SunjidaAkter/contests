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
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(k>0){
            if(s[i]=='1'){s[i]='0';k--;}
        }
    }
    
        for(ll i=0;i<n-k;i++)cout<<s[i];
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