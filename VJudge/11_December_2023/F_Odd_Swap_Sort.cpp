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
    int n;cin>>n;
    ll a[n];bool ok=1;
    for(int i=0;i<n;i++)cin>>a[i];
    vector<ll>odd,even;
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            odd.push_back(a[i]);
        }else {
            even.push_back(a[i]);
        }
    }
    for(int i=1;i<odd.size();i++){
        if(odd[i-1]>odd[i]){
            ok=0;break;
        }
    }
    for(int i=1;i<even.size();i++){
        if(even[i-1]>even[i]){
            ok=0;break;
        }
    }
    if(ok)Yes;
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