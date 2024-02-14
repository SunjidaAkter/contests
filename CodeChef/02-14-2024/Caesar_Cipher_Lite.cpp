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
    string a,b;cin>>a>>b;
    vector<ll>k;
    for(ll i=0;i<n;i++){
        char x=a[i];
        ll cnt=0;
        while(x!=b[i]){
            x+=3;
            // cout<<x<<" ";
            if(x>90){
                x%=90;
                x+=64;
            }
            cnt++;
        }
        // C→F→I→L→O→R→U→X→A→D→G→J→M→P→S→V→Y 
        // cout<<"uu"<<nl;
        k.push_back(cnt);
    }
    for(ll val:k)cout<<val<<" ";
    cout<<nl;
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