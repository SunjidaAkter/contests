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
    ll n;cin>>n;
    string a,b;cin>>a>>b;
    ll cnta=0,cntb=0;
    for(ll i=0;i<n;i++){
        if(a[i]=='R'&&b[i]=='P')cntb++;
        else if(a[i]=='P'&&b[i]=='R')cnta++;
        else if(a[i]=='S'&&b[i]=='R'){cntb++;}
        else if(a[i]=='R'&&b[i]=='S')cnta++;
        else if(a[i]=='P'&&b[i]=='S'){cntb++;}
        else if(a[i]=='S'&&b[i]=='P')cnta++;
    }
    if(cnta>cntb)cout<<0<<nl;
    else if(cnta==cntb)cout<<1<<nl;
    else cout<<((cntb-cnta)/2)+1<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}