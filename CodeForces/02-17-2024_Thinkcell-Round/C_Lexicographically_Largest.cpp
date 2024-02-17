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
    vector<ll>a(n);
    vector<ll>ans;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll mx=0;
    for(ll i=0;i<n;i++){
        mx=max(mx,a[i]+(i+1));
    }
    for(ll i=0;i<a.size();i++){
        if((a[0]+1)==(a.back()+a.size())){
            if(mx>(a[0]+1)){
                ans.push_back(a.back()+a.size());
                a.pop_back();
                i--;
            }else{
                ans.push_back(a[0]+1);
                a.erase(a.begin());
                i--;
            }
        }else{
            ans.push_back(a.back()+a.size());
            a.pop_back();
            i--;
        }
    }
    sort(all(ans));
    reverse(all(ans));
    for(ll val:ans)cout<<val<<" ";
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