#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    string s;cin >> s;
    ll ans=0,cnt=0;
    ll f=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'&&!f){
            continue;
        }
        else if(s[i]=='0'){
            ans=ans+cnt+1;
        }
        else{
            cnt++;
            f=1;
        }
   }
   cout<<ans<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}