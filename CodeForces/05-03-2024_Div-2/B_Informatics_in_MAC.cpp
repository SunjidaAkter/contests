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
    vector<ll>pre(n),suf(n);
    set<ll>prem;
    set<ll>sufm;
    ll x=0,y=0;
    for(ll i=0;i<n;i++){
        prem.insert(a[i]);
        while(prem.count(x))x++;
        pre[i]=x;
    }
    for(ll i=n-1;i>=0;i--){
        sufm.insert(a[i]);
        while(sufm.count(y))y++;
        suf[i]=y;
    }
    vector<pii>ans;
    for(ll i=0;i<n-1;i++){
        if(pre[i]==suf[i+1]){
            cout<<2<<nl;
            cout<<1<<" "<<i+1<<nl;
            cout<<i+2<<" "<<n<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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