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
void solve(){
    ll n,mx=0;cin>>n;
    vector<ll>a(n);
    vector<ll>v(n,0);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
    }
    for(int i=0;i<n;i++){
        if(mp[a[i]]!=0){
            v[i]=a[i];
            mp[a[i]]=0;
        }
    }
    for(int i=0;i<n;i++){
        if(v[i]==0){
            v[i]=mx;
        }
    }
    for(ll val:v)cout<<val<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}