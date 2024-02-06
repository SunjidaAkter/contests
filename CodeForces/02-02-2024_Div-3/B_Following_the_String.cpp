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
    ll a[n];
    map<ll,ll>mp1;
    map<ll,vector<ll>>mp;
    vector<pii>v;

    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp1[a[i]]++;
        mp[a[i]].push_back(mp1[a[i]]-1);
    }
    string s="";
    for(ll i=0;i<n;i++){
        if(mp1[a[i]]){
            char x='a'+(mp[a[i]][0]%26);
            s+=x;
            mp[a[i]].erase(mp[a[i]].begin());
            mp1[a[i]]--;
        }
        // if(a[i]==0){
        //     s+="a";
        // }
    }
    // char x='a'+2;
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