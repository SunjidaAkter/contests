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
const int N=1e5;
void solve(){
    int n;cin>>n;
    vector<int>v(N);
    for(int i=0;i<N;i++)v[i]=i+1;
    for(int i=2;i<n;i++){
        // cout<<(v[0]|v[1])<<"j";
        if(v[i]==(v[i-1]|v[i-2]))swap(v[i],v[i-1]);
        else v[i]=i+1;
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}