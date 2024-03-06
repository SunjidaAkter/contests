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
string decToBinary(ll n){//*for 32 bits 
    string s;
    for (ll i = 31; i >= 0; i--) { 
        ll k = n >> i; 
        if (k & 1) 
            s.push_back('1'); 
        else
            s.push_back('0'); 
    } 
    return s;
}
void solve(){
    ll n;cin>>n;
    string s=decToBinary(n);
    ll sum=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1')sum++;
    }
    if(sum%2==1)cout<<"ODD"<<nl;
    else cout<<"EVEN"<<nl;
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