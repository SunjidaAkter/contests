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
    ll x=1,cnt=0;
    if(n==1){
        cout<<k<<nl;
        return;
    }
    while(x<k){
        x*=2;
        cnt++;
    }
    if(x>k)x/=2;
    cout<<x-1<<" "<<max(k-x+1,(ll)0)<<" ";
    for(ll i=0;i<n-2;i++){
        cout<<0<<" ";
    }  
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