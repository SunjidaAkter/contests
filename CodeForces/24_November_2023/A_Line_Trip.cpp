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
    int n,l;cin>>n>>l;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>v;
    v.push_back(a[0]);
    for(int i=1;i<n;i++){
        v.push_back(abs(a[i-1]-a[i]));
    }
    v.push_back((l-a[n-1])*2);
    sort(all(v));
    // for(int val:v)cout<<val<<" ";
    c(v[v.size()-1]);
    
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}