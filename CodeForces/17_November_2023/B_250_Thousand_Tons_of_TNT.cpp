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
vector<ll> getdiv(ll n){
    vector<ll> ans;
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
void solve(){
    ll n;cin>>n;
    ll a[n],mx=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>div=getdiv(n);
    for(ll val:div){
        ll k=0;
        vector<ll>v;
        for(ll i=0;i<(n/val);i++){
            ll sum=0;
            for(ll i=0;i<val;i++){
                sum+=a[k+i];
            }
            k+=val;
            v.push_back(sum);
        }
        sort(all(v));
        ll ans=abs(v[0]-v[v.size()-1]);
        mx=max(mx,ans);
    }
    sort(a,a+n);
    mx=max(abs(a[0]-a[n-1]),mx);
    cout<<mx<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}