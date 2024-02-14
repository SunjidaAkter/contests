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
    ll n,m;cin>>n>>m;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll sum=0;
    vector<ll>zcnt;
    for(ll i=0;i<n;i++){
        ll num=a[i];
        while(num>0){
            num/=10;
            sum++;
        }
        num=a[i];
        ll cnt=0;
        while(num%10==0){
            cnt++;
            num/=10;
        }
        zcnt.push_back(cnt);
    }
    sort(all(zcnt));
    reverse(all(zcnt));
    ll red=0,turn=0;
    while(!zcnt.empty()){
        ll x=zcnt[0];
        zcnt.erase(zcnt.begin());
        if(turn==0)red+=x;
        turn=1-turn;
    }
    sum-=red;
    if(sum<=m)cout<<"Anna"<<nl;
    else cout<<"Sasha"<<nl;
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