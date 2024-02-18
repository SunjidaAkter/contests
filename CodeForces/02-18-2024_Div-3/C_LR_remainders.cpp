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
ll lcm(ll a, ll b) { return (a/__gcd(a,b))*b; }
// ll lcms(ll l, vector<ll> * a)
// {
//         ll i, result;
//         result = 1;
//         for (i = 0; i < l; i++) result = lcm(result, a[i]);
//         return result;
// }
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    string s;cin>>s;
    // ll prod=lcms(n,a);
    ll prod=1,gcd=0;
    for(ll i=0;i<n;i++)prod=lcm(a[i],prod);
    vector<ll>v;
    v.push_back(prod%m);
    ll i=0,j=n-1,k=0;
    while(i<=j&&k<n){
        if(s[k]=='L'){
            k++;
            prod/=a[i];
            v.push_back(prod%m);
            i++;
        }else{
            k++;
            prod/=a[j];
            v.push_back(prod%m);
            j--;
        }
    }
    // for(ll i=0;i<a.size();i++){
    //     if(s[i]=='L'){
    //         prod/=a[i];
    //         v.push_back(prod%m);
    //     }else{
    //         prod/=a.back();
    //         a.pop_back();
    //         v.push_back(prod%m);
    //         i--;
    //     }
    // }
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
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