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
    int a[n],b[n];
    int fr[1440]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        fr[a[i]]++;
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        fr[b[i]]++;
    }
    // cout<<fr[4]<<" ";
    int mx=0;
    for(int val:fr)mx=max(mx,val);
    c(mx);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}