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
    ll n,p,l,t;cin>>n>>p>>l>>t;
    ll task=(((n-1)/7)+1);
    ll perm=(2*t)+l;
    ll pert=t+l;
    if(task>0){
        if(task>=2){
            ll e=task/2;
            ll e=task%2;
            p-=(perm*e);
            n-=e;
            if(p<0){
                n+=(abs(p)/perm);
            }
            if(o&&)
        }
    }
}
int main(){
    FAST;
    int test;cin>>test;
    while(test--){
        solve();
    }
    return 0;
}