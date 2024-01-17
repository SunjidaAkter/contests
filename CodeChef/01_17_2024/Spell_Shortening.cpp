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
    ll n;cin>>n;
    string s,str;cin>>s;
    str=s;
    sort(all(str));
    char x=str.back();
    for(ll i=1;i<n;i++){
        if(s[i-1]>s[i]){
            s.erase(s.begin()+(i-1));
            break;
        }
    }
    if(s.size()==n){
        s.pop_back();
        cout<<s<<nl;
    }else cout<<s<<nl;
    // string s1="zyb",s2="yba";
    // cout<<(s2<s1)<<nl;
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