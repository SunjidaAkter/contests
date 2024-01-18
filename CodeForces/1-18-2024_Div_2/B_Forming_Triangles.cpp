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
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
        mp[a[i]]++;
    }
    if(st.size()==n||n<3){
        cout<<0<<nl;
        return;
    }
    // sort(a,a+n);
    if(st.size()==1){
        ll sum=0;
        for(ll i=1;i<n;i++){
            if(a[i-1]==a[i]){
                sum+=(n-2);
            }else sum+=(mp[a[i-1]]-1+mp[a[i]]-1);
        }
        if(st.size()==1){
            if(a[0]==a[n-1])sum+=(n-2);
            else sum+=(mp[a[0]]-1+mp[a[n-1]]-1);
        }
        cout<<sum<<nl;
        return;
    }
    ll sum=0;
            ll x=n;
    for(ll i=0;i<n;i++){
        if(mp[a[i]]>1){
            while(mp[a[i]]>1){
                sum+=(x-2);
                x--;
                mp[a[i]]--;
            }
        }
    }
    cout<<sum<<nl;
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