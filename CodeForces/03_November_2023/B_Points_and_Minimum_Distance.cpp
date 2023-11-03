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
    int x;cin>>x;
    int n=2*x;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll sum1=0,sum2=0;
    vector<ll>v1;
    vector<ll>v2;
    int i=0,j=n-1;
    while(i<=j){
        // cout<<a[i]<<" "<<a[j]<<nl;
        v1.push_back(a[i]);
        v2.push_back(a[j]);
        i++,j--;
    }
    for(int i=1;i<v1.size();i++)sum1+=abs(v1[i-1]-v1[i]);
    for(int i=1;i<v2.size();i++)sum2+=abs(v2[i-1]-v2[i]);
    cout<<sum1+sum2<<endl;
    i=0,j=n-1;
    while(i<=j){
        cout<<a[i]<<" "<<a[j]<<nl;
        // v1.push_back(a[i]);
        // v2.push_back(a[j]);
        i++,j--;
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