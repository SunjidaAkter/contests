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
    ll cnt=0;
    for(int i=0;i<n;i++){
            if(a[i]>=m) cnt++;
            else{
                int s=a[i];
                while(i+1<n && a[i+1]<m && s<m){
                    s += a[i+1];
                    i++;
                }
                if(s>=m) cnt++;
            }
        }
        cout << cnt << endl;
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