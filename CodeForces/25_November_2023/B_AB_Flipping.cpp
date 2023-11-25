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
    ll n;cin>>n;
    string s;cin>>s;
    ll x=n;bool b=0;
    ll cnt=0;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='B'&&b==0){
            b=1;
            x=i+1;
        }else if(s[i]=='A'&&b==1){
            cnt+=abs(x-(i+1));
            x=i+1;
        }
    }
    cout<<cnt<<nl;

}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}