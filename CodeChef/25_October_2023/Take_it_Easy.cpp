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
    ll a[n];ll sum=0,s1=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=a[i];
    bool flag=true;
    for(ll i=1;i<n;i++){
        if((abs(a[i-1]-a[i]))%2!=0){
            flag=false;
            s1+=abs(a[i-1]-a[i]);
        }else{
            s1+=abs(a[i-1]-a[i]);
        }
    }
    ll x=sum/n;
    if((s1==0||(s1>2))&&sum%n==0&&flag)Yes;
    else No;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}