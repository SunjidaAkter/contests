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
ll mex(vector<ll> &arr, ll N)
{
 
  // sort the array
  sort(arr.begin(), arr.end());
 
  ll mex = 0;
  for (ll idx = 0; idx < N; idx++)
  {
    if (arr[idx] == mex)
    {
      // Increment mex
      mex += 1;
    }
  }
 
  // Return mex as answer
  return mex;
}
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    set<ll>st;
    for(ll i=0;i<n;i++)st.insert(a[i]);
    if(st.size()==1){
        cout<<n<<nl;
        for(ll i=1;i<=n;i++){
            cout<<i<<" "<<i<<nl;
        }
        return;
    }
    ll mn=LONG_MAX;
    for(ll i=0;i<n;i++){
        mn=min(a[i],mn);
    }
    ll z=0;
    for(ll i=0;i<n;i++){
        if(a[i]==mn)z++;
    }
    if(z==1){
        cout<<-1<<nl;
        return;
    }
    vector<vector<ll>>vv;
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        if(mp[a[i]]==1){
            mp.clear();
            v.push_back(i);
        }
        mp[a[i]]++;
    }
    if(v.back()!=n)
    v.push_back(n);
    ll j=0;
    for(ll val:v){
        vector<ll>tmp;
        for(ll i=j;i<val;i++){
            tmp.push_back(a[i]);
        }
        j=val;
        vv.push_back(tmp);
    }
    set<ll>ans;

    for(auto val:vv){
        // cout<<mex(val,val.size())<<" n ";
        // for( ll c:val)cout<<c<<" ";
        // cout<<nl;
        ans.insert(mex(val,val.size()));
    }
    if(ans.size()==1){
        cout<<v.size()<<nl;
        ll k=1;
        for(ll i=0;i<v.size();i++){
            cout<<k<<" "<<v[i]<<nl;
            k=v[i]+1;
        }
    }else cout<<-1<<nl;
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