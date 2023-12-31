#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
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