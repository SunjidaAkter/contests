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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    ll cnt=0;
    for(ll i=0;i<n;i++)cnt+=a[i];
    ll avg=cnt/n;
    for(ll i=0;i<n;i++){
            if(a[i]<avg){
                if(a[i]+sum<avg){
                    no;return;
                }else{
                    sum-=(avg-a[i]);
                }
            }else if(a[i]>avg){
                sum+=(a[i]-avg);
            }
    }
    yes;
    // if(sum%n==0)yes;
    // else no;
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