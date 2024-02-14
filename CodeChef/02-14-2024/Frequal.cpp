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
vector<ll> sieve(ll n){
    ll *a = new ll[n + 1]();
    vector<ll> vect;
    for (ll i = 2; i <= n; i++){
        if (a[i] == 0){
            vect.push_back(i);
            for (ll j = i * i; j <= n; j += i){
                a[j] = 1;
            }
        }
    }
    return vect;
}
vector<ll>ans=sieve(10000000);
void solve(){
    ll n;cin>>n;
    vector<ll>ans1;
    if(n==1){
        cout<<1<<nl;
        return;
    }
    if(n==2){
        cout<<2<<" "<<2<<nl;
        return;
    }
    if(n==3){
        cout<<1<<" "<<2<<" "<<2<<nl;
        return;
    }
    if(n==4){
        cout<<2<<" "<<2<<" "<<3<<" "<<3<<nl;
        return;
    }
    if(n==5){
        cout<<1<<" "<<2<<" "<<3<<" "<<3<<" "<<2<<nl;
        return;
    }
    if(n%2==0){
        ans1.push_back(1);
        ans1.push_back(4);
        ans1.push_back(4);
        ans1.push_back(4);
    }else{
        ans1.push_back(1);
    }
    ll i=0;
    while(ans1.size()!=n){
        ans1.push_back(ans[i]);
        ans1.push_back(ans[i]);
        i++;
    }
    for(ll val:ans1)cout<<val<<" ";
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