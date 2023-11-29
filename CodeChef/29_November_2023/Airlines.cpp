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
    int n,p;cin>>n>>p;
    if(p%100==0){
        if(((p/100)-n)>=0)cout<<((p/100)-n)<<nl;
        else cout<<0<<nl;
    }else{
        if(((p/100)-n+1)>=0)cout<<((p/100)-n+1)<<nl;
        // cout<<((p/100)-n+1)<<nl;
        else cout<<0<<nl;
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