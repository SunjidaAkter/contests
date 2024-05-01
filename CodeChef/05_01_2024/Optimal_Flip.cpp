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
ll countSubarraysWithEven(vector<ll>& arr) {
    ll count = 0;
    ll subarrayCount = 0;
    for (ll num : arr) {
        if (num % 2 == 0) {
            subarrayCount++;
            count += subarrayCount;
        } else {
            subarrayCount = 0;
        }
    }
    return count;
}
void solve(){
    ll n;cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    // for(ll i=0;i<n;i++){
    //     if(a[i]%2==0)sum++;
    // }
    // if(sum==n){
    //     cout<<max(n*(n+1)/2-n,(n*(n+1))/2)<<nl;
    //     return;
    // }
    // ll s1=sum+1;
    // // sum++;
    // ll x=n-sum;
    // ll x1=n-s1;
    cout<<countSubarraysWithEven(a)<<nl;
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