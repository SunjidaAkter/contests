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
ll Substring(string s)
{
 
    ll ans = 1, temp = 1;
    for (ll i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            ++temp;
        }
        else {
            ans = max(ans, temp);
            temp = 1;
        }
    }
    ans = max(ans, temp);
 
    return ans;
}
void solve(){
    ll n,q; cin>>n>>q;
    string s; cin>>s;
    ll mx=Substring(s);
    ll tmp=1;
    for(ll i=n-1;i>0;i--){
        if(s[i]==s[i-1]) tmp++;
        else break;
    }
    cout<<mx<<" ";
    while(q--){
        char ch; cin>>ch;
        if(s.back()==ch){
            tmp++;
            s += ch;
            mx=max(mx,tmp);
        }else{
            tmp=1;
            s += ch;
        }
        cout<<mx<<" ";
    }
    cout<<endl;
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