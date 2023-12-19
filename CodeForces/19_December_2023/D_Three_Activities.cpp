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
    ll g[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cin>>g[i][j];
        }
    }
    vector<ll>a,b,c,d;
    for(int j=0;j<n;j++){
        ll mx=0,x,cnt=0;
        for(int i=0;i<3;i++){
            // cout<<mx<<" here ";
            if(g[i][j]>mx){
                mx=g[i][j];
                x=i;
            }else if(g[i][j]==mx){
                // if(cnt==2)d.push_back(2);
                // d.push_back(i);
                // cnt++;
                mx=g[i][j];
                d.push_back(mx);
                x=-1;
            }
        }
        if(x==-1){
            continue;
        }
        else if(x==0)a.push_back(mx);
        else if(x==1)b.push_back(mx);
        else if(x==2)c.push_back(mx);
    }
    if(!a.empty())sort(all(a));
    if(!b.empty())sort(all(b));
    if(!c.empty())sort(all(c));
    if(!d.empty())sort(all(d));
    if(!a.empty())reverse(all(a));
    if(!b.empty())reverse(all(b));
    if(!c.empty())reverse(all(c));
    if(!d.empty())reverse(all(d));
    // sort(all(b));
    // sort(all(c));
    // reverse(all(a));
    // reverse(all(b));
    // reverse(all(c));
    // cout<<a.size()<<" ";
    // cout<<b.size()<<" ";
    // cout<<c.size()<<" ";
    // for(ll val:a)cout<<val<<" ";
    // cout<<nl;
    // for(ll val:b)cout<<val<<" ";
    // cout<<nl;
    // for(ll val:c)cout<<val<<" ";
    // cout<<nl;
    ll ans=0;
    vector<ll>v;
    if(!a.empty())v.pub(a[0]);
    if(!b.empty())v.pub(b[0]);
    if(!c.empty())v.pub(c[0]);
    if(!d.empty()){
        for(ll val:d)v.push_back(val);
    }
    sort(all(v));
    reverse(all(v));
    for(int i=0;i<3;i++)ans+=v[i];
    // if(!b.empty())ans+=b[0];
    // if(!c.empty())ans+=c[0];
    // ll ans=a[0]+b[0]+c[0];
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}