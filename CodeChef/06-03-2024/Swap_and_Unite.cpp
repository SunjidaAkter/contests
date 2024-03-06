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
    string s;cin>>s;
    if(s.size()==1||s.size()==2){
        cout<<0<<nl;
        return;
    }
    string str="";
    str+=s[0];
    for(ll i=1;i<s.size();i++){
        if(s[i-1]==s[i])continue;
        else str+=s[i];
    }
    char x;
    map<char,ll>mp;
    for(ll i=0;i<str.size();i++)mp[str[i]]++;
    ll mn=LONG_MAX;
    for(auto it:mp){
        if(mn>it.second){
            x=it.first;
            mn=it.second;
        }
    }
    ll cnt=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]==x)cnt++;
    }
    ll cc=1;
    ll mx=0;
    for(ll i=1;i<s.size();i++){
        if(s[i-1]==x&&s[i-1]==s[i]){
            cc++;
        }else{
            mx=max(mx,cc);
            cc=1;
        }
    }
    mx=max(mx,cc);
    cout<<cnt-mx<<nl;
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