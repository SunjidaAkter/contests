// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define all(X) (X).begin(), (X).end()
// #define pub push_back
// #define pob pop_back
// #define nl  '\n'
// #define c(x) cout<<x<<nl
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define Yes cout<<"Yes"<<nl
// #define No cout<<"No"<<nl
// typedef pair<int,int>pii;
// #define forl(ty,var,str,end) for(ty var=str; var<end; var++)
// # define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
// void solve(){
//     ll n;cin>>n;
//     ll a[n];
//     ll prod=1;
//     for(ll i=0;i<n;i++)cin>>a[i];
//     for(ll i=0;i<n;i++)prod*=a[i];
//     if(prod<=0)cout<<0<<nl;
//     else{
//         cout<<1<<nl;
//         cout<<1<<" "<<0<<nl;
//     }
// }
// int main(){
//     FAST;
//     int t;cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
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
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll zero=0,neg=0;
    for(ll i=0;i<n;i++){
        if(a[i]==0)zero++;
        if(a[i]<0)neg++;
    }
    if(zero>0)cout<<0<<nl;
    else{
        if(neg%2==0)cout<<1<<nl<<1<<" "<<0<<nl;
        else cout<<0<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}