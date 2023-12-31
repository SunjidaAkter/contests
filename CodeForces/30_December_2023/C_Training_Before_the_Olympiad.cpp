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
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>ans(n);
    vector<ll>v(n);
    ans[0]=a[0];
    for(ll i=1;i<n;i++){
        ans[i]=ans[i-1]+a[i];
    }
    // for(ll i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<nl;
    // for(ll i=0;i<n;i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<nl;
    v[0]=ans[0];
    // cout<<ans[0]<<" ";
    ll x=0;
    for(ll i=1;i<n;i++){
        if(ans[i]%2!=0){
            if(ans[i-1]%2==0||i-1==0){v[i]=ans[i]-1;ans[i]-=1;x=1;}
            else {v[i]=ans[i]+x;x=0;}
        }else{
            if((ans[i-1]%2==0)&&x){v[i]=ans[i]-2;ans[i]-=2;x=1;}
            else {v[i]=ans[i];}
            // v[i]=ans[i];
        }
    }
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
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