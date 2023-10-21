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
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll pre[n],post[n];
    pre[0]=a[0],post[n-1]=a[n-1];
    for(ll i=1;i<n;i++)pre[i]=max(a[i],pre[i-1]);
    for(ll i=n-2;i>=0;i--)post[i]=max(a[i],post[i+1]);
    for(ll i=1;i<n-1;i++){
        if(a[i]>=pre[i-1]||a[i]>=post[i+1])continue;
        else {
            a[i]=min(pre[i-1],post[i+1]);
        }
    }
    for(ll i=0;i<n;i++)sum+=a[i];
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}