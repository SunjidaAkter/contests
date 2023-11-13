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
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll cnt=0,j=1,ans=1;
    vector<pii>v;
    for(ll i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cnt++;
            v.push_back({j,i});
            j++;
        }
    }
    ll c=cnt/k;
    for(ll i=(k-1);i<(c*k-1);i+=k){
        ans*=(abs(v[i].second-v[i+1].second));
        ans%=mod;
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}