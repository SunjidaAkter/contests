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
    if(n==1){
        yes;return;
    }
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    if(n==2){
        if(a[0]>a[1]){
            no;return;
        }else {
            yes;
            return;
        }
    }
    if(n==3){
        for(ll i=0;i<n-2;i++){
            if(a[i]>a[i+2])swap(a[i],a[i+2]);
        }
        for(ll i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                no;return;
            }
        }
    }
    yes;

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