#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
bool subArrayExists(ll arr[], int n){
    unordered_map<ll,bool,custom_hash> mp;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum == 0 || mp[sum])
            return true;
 
        mp[sum]=true;
    }
    return false;
}
 
void solve(){
    int n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=1;i<n;i+=2){
        a[i]*=(-1);
    }
    if(subArrayExists(a,n))yes;
    else no;
    // ll sum=0;bool f=0;
    // map<ll,bool>mp;
    // for(ll i=0;i<n;i++){
    //     sum+=a[i];
    //     if(sum==0||mp[sum])f=1;
    //     mp[sum]=true;
    // }
    // if(f)yes;
    // else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}