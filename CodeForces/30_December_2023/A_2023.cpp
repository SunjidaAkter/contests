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
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll prod=1;
    for(ll i=0;i<n;i++)prod*=a[i];
    if(2023%prod!=0)no;
    else{
        yes;
        cout<<2023/prod<<" ";
        for(ll i=0;i<k-1;i++){
            cout<<1<<" ";
        }
        cout<<nl;
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