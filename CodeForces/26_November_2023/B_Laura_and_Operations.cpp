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
    int a,b,c;cin>>a>>b>>c;
    vector<int>v;
    v.push_back(abs(b-c) %2);
    v.push_back(abs(a-c) %2);
    v.push_back(abs(b-a) %2);
    for(int i=0;i<3;i++){
        if(v[i]%2==0)cout<<1<<" ";
        else cout<<0<<" ";
    }
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