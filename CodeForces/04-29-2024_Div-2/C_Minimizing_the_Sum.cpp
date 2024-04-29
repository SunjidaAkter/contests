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
    ll n,k;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>vc;
    for(ll i=0;i<n;i++)vc.push_back(a[i]);
    sort(vc.rbegin(),vc.rend());
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        if(!mp[vc[i]])mp[vc[i]]=i+1;
    }
    int ith=1;
    while(k>0){
        for(int i=0;i<n;i++){
            if(mp[a[i]]==ith){
                while(i+1<n && a[i]==a[i+1])i++;
                a[i]=min(a[i-1>=0?i-1:i],a[i+1<n?i+1:i]);
            }
        }
        ith++;
        k--;
    }

    ll sum=0;for(auto &c:a)sum+=c;
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