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
    ll n,m;cin>>n>>m;
    if(n<=m)cout<<1<<nl;
    else{
        if(n-m==1)cout<<1<<nl;
        else{
            if((n)%(m+1)==0)cout<<max((n/(m+1)),((-2*m)+n))<<nl;
            else cout<<max((n/(m+1))+1,((-2*m)+n))<<nl;
        }
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