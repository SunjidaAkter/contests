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
    string s1,s2;cin>>s1>>s2;
    if(s1==s2){
        cout<<0<<nl;
        return;
    }
    ll up=0,down=0;
    vector<ll>des,giv;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            if(s1[i]=='1'&&s2[i]=='0')up++;
            if(s1[i]=='0'&&s2[i]=='1')down++;
        }
    }
    cout<<max(up,down)<<nl;
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