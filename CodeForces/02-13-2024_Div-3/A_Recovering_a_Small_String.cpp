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
    string s;
    if(n>28&&n<54){
        s+=('a'+25);
        n-=26;
        s+=('a'+n-2);
        s+=('a');
        reverse(all(s));
    }else if(n>53){
        s+=('a'+25);
        s+=('a'+25);
        n-=52;
        s+=('a'+n-1);
        reverse(all(s));
    }else{
        s+="aa";
        s+=('a'+n-3);
    }
    cout<<s<<nl;
    
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