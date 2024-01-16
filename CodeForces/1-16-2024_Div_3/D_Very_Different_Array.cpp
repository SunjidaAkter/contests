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
    ll n,m;cin>>n>>m;
    vector<ll>a(n),b(m);ll cnt1=0,cnt2=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    // sort(b,b+m);
    ll i=0,j=0;
    while(cnt2<n){
        cnt2++;
        if(abs(a[i]-b[j])>=abs(a.back()-b.back())){
            cnt1+=abs(a[i]-b[j]);
            i++,j++;
        }else{
            cnt1+=abs(a.back()-b.back());
            a.pop_back();
            b.pop_back();
        }
    }
    cout<<cnt1<<nl;
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