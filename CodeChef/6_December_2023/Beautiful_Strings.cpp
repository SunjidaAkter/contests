#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
const ll mod=1e9+7;
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    ll fr[26]={0};
    for(ll i=0;i<n;i++){
        fr[s[i]-'a']++;
    }
    ll sum=0,mul=1,cnt=0;
    for(ll i=0;i<26;i++){
        mul*=(fr[i]+1);
        sum%=mod;
    }
    // cout<<sum<<"nl";
    // for(ll i=0;i<26;i++){
    //     if(fr[i]){
    //         mul*=fr[i];
    //         mul%=mod;
    //         cnt++;
    //     }
    // }
    // if(cnt==1)cout<<(sum)%mod<<nl;
    cout<<(mul-1)%mod<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}