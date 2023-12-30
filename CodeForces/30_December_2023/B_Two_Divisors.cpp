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
// vector<ll> getdiv(ll n){
//     vector<ll> ans;
//     for (ll i = 1; i * i <= n; i++){
//         if (n % i == 0){
//             ans.push_back(i);
//             if (n / i != i){
//                 ans.push_back(n / i);
//             }
//         }
//     }
//     return ans;
// }
void solve(){
    ll x,y;cin>>x>>y;
    if(x==1){
        cout<<y*y<<nl;
        return;
    }
    ll GCD=__gcd(x,y);
    ll LCM=(x/GCD)*y;
    if(LCM==max(x,y))cout<<y*(y/x)<<nl;
    else cout<<LCM<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}