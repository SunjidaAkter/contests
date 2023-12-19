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
    int n;cin>>n;
    string s;cin>>s;
    ll fr[26]={0},mx=0;
    for(int i=0;i<n;i++)fr[s[i]-'a']++;
    for(int i=0;i<26;i++)mx=max(fr[i],mx);
    ll uncovered=(n-2*(n-mx));
    ll rem=n%2;
    cout<<max(uncovered,rem)<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}