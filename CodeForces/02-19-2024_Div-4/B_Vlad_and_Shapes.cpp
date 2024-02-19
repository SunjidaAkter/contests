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
    vector<string>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        ll s=0;
        for(ll j=0;j<n;j++){
            if(v[i][j]=='1'){
                s++;
            }
        }
        if(s!=0)ans.push_back(s);
    }
    if(ans.size()==1){
        cout<<"SQUARE"<<nl;
        return;
    }
    if(ans.size()==2){
        if(ans[0]!=ans[1]){
            cout<<"TRIANGLE"<<nl;
            return;
        }else{
            cout<<"SQUARE"<<nl;
            return;

        }
    }
    // for(ll val:ans)cout<<val<<" n ";
    for(ll i=0;i<ans.size()-2;i++){
        if(ans[i]!=ans[i+1]){
            cout<<"TRIANGLE"<<nl;
            return;
        }
    }
    cout<<"SQUARE"<<nl;
    
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