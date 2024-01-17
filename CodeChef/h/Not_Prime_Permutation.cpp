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
    if(n==1||n==2){
        cout<<-1<<nl;
        return;
    }
    if(n%2==0){
        for(ll i=0;i<n;i++){
            if(a[i]>n-2){
                if(a[i]%2==0)cout<<2<<" ";
                else cout<<1<<" ";
            }else
            cout<<a[i]+2<<" ";
        }
        cout<<nl;
    }else{
        for(ll i=0;i<n;i++){
            cout<<(n+1)-a[i]<<" ";
        }
        cout<<nl;
    }
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