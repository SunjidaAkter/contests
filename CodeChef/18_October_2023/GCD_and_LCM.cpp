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
void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    if(x==y)cout<<x+y<<nl;
    else if(x%y==0||y%x==0){
        if(x<y)cout<<x+x<<nl;
        else cout<<y+y<<nl;
    }else if(k==1){
        if(x<y)cout<<x+__gcd(x,y)<<nl;
        else cout<<y+__gcd(x,y)<<nl;
    }else if(k>1) cout<<2*__gcd(x,y)<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}