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
typedef pair<int,int>pii;
void solve(){
    int n;cin>>n;
    ll sum=0;
    if(n%2==0){
        ll x=n/2;
        sum=x*(x+1);
    }else{
        ll x=n/2;
        sum=x*(x+1);
        sum+=(n/2)+1;
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