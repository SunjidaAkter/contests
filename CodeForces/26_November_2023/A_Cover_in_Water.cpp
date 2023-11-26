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
    string s;cin>>s;
    int cnt=0,cnt1=0,mx=0;
    bool ok=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
            cnt1++;
        }
        if(s[i]=='#'){
            ok=1;
            mx=max(cnt1,mx);
            cnt1=0;
        }
    }
    mx=max(mx,cnt1);
    if(mx>=3)cout<<2<<nl;
    else cout<<cnt<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}