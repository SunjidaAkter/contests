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
    set<ll>st;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
    }
    if(st.size()==1){
        cout<<0<<nl;
        return;
    }
    ll f=1,b=1;
    for(ll i=1;i<n;i++){
        if(a[i-1]==a[i])f++;
        else break;
    }
    for(ll i=n-2;i>=0;i--){
        if(a[i+1]==a[i])b++;
        else break;
    }
    if(a[0]==a[n-1])cout<<n-(f+b)<<nl;
    else cout<<n-max(f,b)<<nl;
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