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
    ll n,cnt=0;cin>>n;
    ll a[n];bool f=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    if(n==4){
        for(ll i=3;i<n;i++){
            if((a[i]+a[i-1])!=(a[i-2]+a[i-3])){
                f=1;break;
            }
        }
        if(f)yes;
        else no;
    }else{
        for(ll i=1;i<n;i++){
            if((a[i]!=a[i-1])){
                f=1;break;
            }
        }
        if(f)yes;
        else no;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}