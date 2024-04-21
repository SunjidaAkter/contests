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
    ll y=k;
    vector<ll>v;
    ll x=1,i=0;
    for(i=0;i<n;i++){
        if(k>=x){
            v.push_back(x);
            k-=x;
            x*=2;
        }else break;
    }
    if(k>=0&&v.size()==n){
        if(y%2==0){
            cout<<1<<" "<<y-1<<" ";
            for(i=0;i<n-2;i++){
                cout<<0<<" ";
            }
            cout<<nl;
            return;
        }
        cout<<y<<" ";
        for(ll i=0;i<n-1;i++)cout<<0<<" ";
        cout<<nl;
        return;
    }
    if(k>0&&v.size()<n){v.push_back(k);}
    else if(k<=0&&v.size()<n){i--;}
    // cout<<i<<"' i '";
    if(v.size()<n){
        // i=i-1;
    // cout<<i<<" size ";
        while(i<n-1){v.push_back(0);i++;}
    // cout<<i<<" size ";
    }
    for(ll j=0;j<v.size();j++)cout<<v[j]<<" ";
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