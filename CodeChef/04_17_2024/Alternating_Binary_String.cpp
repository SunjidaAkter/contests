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
    string s;cin>>s;
    string str1="";
    for(ll i=0; i<n; i++){
        if(s[i]=='0')str1+="1";
        else str1+="0";
    }
    ll cnt=0;
    bool f=0;
    bool f1=0;
    for(ll i=1; i<n; i++){
        if(!f&&s[i-1]==s[i]){
            f=1;cnt++;
            // cout<<"cn11";
        }else if(f&&str1[i-1]==str1[i]){
            f=0;cnt++;
            // cout<<"cn22";
        }
    }
    cout<<cnt<<endl;
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