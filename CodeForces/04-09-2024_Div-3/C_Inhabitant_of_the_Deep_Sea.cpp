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
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=a[i];
    if(k>=sum){
        cout<<n<<nl;
        return;
    }
    ll kk=(k/2)+(k%2);
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(kk>=a[i]){
            cnt++;
            kk-=a[i];
        }else break;
    }
    kk=(k/2);
    for(ll i=n-1;i>=0;i--){
        if(kk>=a[i]){
            cnt++;
            kk-=a[i];
        }else break;
    }
    cout<<cnt<<nl;
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