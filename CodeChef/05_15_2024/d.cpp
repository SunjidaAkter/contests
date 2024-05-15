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
    ll n,q;cin>>n>>q;
    vector<ll>b(n);
    for(ll i=0;i<n;i++)cin>>b[i];
    vector<ll>a(n);
    a=b;
    sort(all(a));
    ll sum1=0,sum2=0;
    for(ll i=0;i<n/2;i++){
        sum1+=a[i];
    }
    for(ll i=n/2;i<n;i++){
        sum2+=a[i];
    }
    ll ans=sum2-sum1;
    vector<ll>v;
    ll pre[n];
    pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    for(ll i=0;i<n/2+1;i++){
        v.push_back(ans);
        ll xx=a.back();
        a.pop_back();
        ans-=xx+a.back()-pre[n-(i*2)];
        a.pop_back();
    }
    for(ll val:v)cout<<val<<" ";
    cout<<nl;
    // for(ll i=0;i<q;i++){
    //     ll d;cin>>d;
    //     vector<ll>dq;
    //     for(ll i=0;i<d;i++){
    //         dq.push_back(a[i]);
    //     }
    //     sort(dq.begin(),dq.end());
    //     ll s1=0,s2=0;
    //     for(ll i=0;i<d/2;i++){
    //         s1+=dq[i];
    //     }
    //     for(ll i=(d/2);i<d;i++){
    //         // cout<<dq[i]<<" ";
    //         s2+=dq[i];
    //     }
    //     cout<<s2-s1<<" ";
    // }
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