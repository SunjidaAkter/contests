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
    vector<string>s(3);
    for(ll i=0;i<3;i++){
        cin>>s[i];
    }
    ll x,y;
    for(ll i=0;i<3;i++){
        for(ll j=0;j<3;j++){
            if(s[i][j]=='?'){
                x=i,y=j;
            }
        }
    }
    char ans;
    for(char i='A';i<='C';i++){
        if(s[x].find(i) == std::string::npos){
            ans=i;
            break;
        }
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}