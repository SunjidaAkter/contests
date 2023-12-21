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
    ll n,k;cin>>n>>k;
    ll a[n],x;
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll sum=0,mx=0;
    for(ll i=0;i<n;i++)mx=max(a[i],mx);
    for(ll i=0;i<n;i++)sum+=abs(mx-a[i]);
    if(sum%k==0)x=sum/k;
    else x=(sum/k)+1;
    cout<<max(x,mx-a[0])<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}