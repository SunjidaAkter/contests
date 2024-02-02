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
    ll n,k,m;cin>>n>>k>>m;
    string s;cin>>s;
    vector<string>v;
    set<char>s1,s2;
    string ans="",str="";
    for(ll i=0;i<k;i++)s1.insert(i+'a');
    s2=s1;ll cnt=0,f=1;
    for(ll i=0;i<m;i++){
        if(s1.find(s[i])!=s1.end()){
            s1.erase(s[i]);
        }
        f=1;
        str+=s[i];
        if(s1.size()==0){
            // reverse(all(str));
            v.push_back(str);
            s1=s2;
            cnt++;
            f=0;
        }
    } 
    // reverse(all(v));
    if(cnt>=n){
        yes;return;
    }
    for(string val:v)ans+=val.back();
    if(f)ans+=*s1.begin();
    while(ans.size()<n)ans+='a';
    // reverse(all(ans));
    no;cout<<ans<<nl;
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