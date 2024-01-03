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
     if((n==1||n==2)&&k==0){
        if(n==1)cout<<1<<nl;
        if(n==2)cout<<1<<" "<<2<<nl;
     }else if(abs(n-k)<2)cout<<-1<<nl;
     else{
        if((n-k)==2){
            cout<<n<<" ";
            for(ll i=1;i<n;i++)cout<<i<<" ";
            cout<<nl;
            return;
        }
        cout<<1<<" ";
        if(k==0){
            for(ll i=2;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<nl;
        }else{
            if((n-k)%2!=0){
                for(ll i=(n+1)-((((n-k)-3)/2)+1);i<=n;i++){
                    cout<<i<<" ";
                }
                for(ll i=2;i<=(n)-((((n-k)-3)/2)+1);i++){
                    cout<<i<<" ";
                }
                cout<<nl;    
            }else{
                for(ll i=(n)-((((n-k)-3)/2)+1);i<n;i++){
                    cout<<i<<" ";
                }
                for(ll i=2;i<=(n-1)-((((n-k)-3)/2)+1);i++){
                    cout<<i<<" ";
                }
                cout<<n<<nl;    
            }
        }
     }
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