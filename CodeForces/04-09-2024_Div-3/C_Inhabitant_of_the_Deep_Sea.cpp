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
    vector<ll>a(n);
    vector<ll>v;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n/2+n%2;i++){
        v.push_back(a[i]);
        v.push_back(a.back());
        a.pop_back();
    }
    ll cnt=0,x=n-1;
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<nl;
    for(ll i=0;i<n-1;i++){
        if(v[i+1]==0)swap(v[i],v[i+1]);
        if((v[i]!=0&&k>=2*(min(v[i],v[i+1])))||(k>=2*(min(v[i+1],v[i+2]))&&i!=n-2)){
            if(v[i]==0&&i!=n-2){
                i++;
            }
            if(v[i]==0&&i==n-2){
                break;
            }
            ll xy=min(v[i],v[i+1]);
            v[i]-=xy;
            v[i+1]-=xy;
            // cout<<max(v[i],v[i+1])<<nl;
            if(max(v[i],v[i+1])==0){cnt++;}
            cnt++;
            k-=2*xy;
        }else if(v[i]<=v[i+1]&&k==2*(min(v[i],v[i+1]))-1){
            v[i+1]-=(v[i]-1);
            v[i]-=v[i];
            cnt++;
            k-=2*(min(v[i],v[i+1]))-1;
        }else break;
    }
    if(v.back()==0)cnt++;
    cout<<cnt<<nl;
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