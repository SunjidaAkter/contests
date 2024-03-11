#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(k) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    // ll n,m,k;cin>>n>>m>>k;
    // vector<ll>v;
    // while(m--){
    //     ll x;cin>>x;
    //     char y;cin>>y;
    //     if(y=='?'){
    //         if(v.size()>0){
    //             vector<ll>tmp;
    //             for(ll val:v){
    //                 ll z=val;
    //                 z+=x;
    //                 if(z>n)z%=n;
    //                 tmp.push_back(z);
    //                 z=val;
    //                 z-=x;
    //                 if(z<=0)z+=n;
    //                 tmp.push_back(z);
    //             }
    //             v.clear();
    //             v=tmp;
    //         }else{
    //             ll z=k;
    //             z+=x;
    //             if(z>n)z%=n;
    //             v.push_back(z);
    //             z=k;
    //             z-=x;
    //             if(z<=0)z+=n;
    //             v.push_back(z);
    //         }
    //     }else if(y=='1'){
    //         if(v.size()>0){
    //             vector<ll>tmp;
    //             for(ll val:v){
    //                 ll z=val;
    //                 z-=x;
    //                 if(z<=0)z+=n;
    //                 tmp.push_back(z);
    //             }
    //             v.clear();
    //             v=tmp;
    //         }else{
    //             ll z=k;
    //             z-=x;
    //             if(z<=0)z+=n;
    //             v.push_back(z);
    //         }

    //     }else{
    //         if(v.size()>0){
    //             vector<ll>tmp;
    //             for(ll val:v){
    //                 ll z=val;
    //                 z+=x;
    //                 if(z>n)z%=n;
    //                 tmp.push_back(z);
    //             }
    //             v.clear();
    //             v=tmp;
    //         }else{
    //             ll z=k;
    //             z+=x;
    //             if(z>n)z%=n;
    //             v.push_back(z);
    //         }

    //     }

    // }
    // set<ll>st;
    // for(ll val:v)st.insert(val);
    // cout<<st.size()<<nl;
    // while(!st.empty()){
    //     cout<<*st.begin()<<" ";
    //     st.erase(*st.begin());
    // }
    // cout<<nl;
    ll n,m,k;
    cin>>n>>m>>k;
    vector<pair<ll,char>>v;
    for(ll i=0;i<m;i++){
        ll y;char c;
        cin>>y>>c;
        v.push_back({y,c});
        
    }
    set<ll>pl;
    pl.insert(k);
    for(ll i=0;i<m;i++){
        ll y=v[i].first;
        char c=v[i].second;

        set<ll>s;
        for(ll u:pl){
    if(c=='0'){
        ll j=(u+y-1)%n+1;
        //cout<<v;
        s.insert(j);
    }
    else if(c=='1'){
         ll j=(u-y-1+n)%n+1;
         //cout<<v;
        s.insert(j);
    }
    else{
     ll j=(u+y-1)%n+1;
      ll v2=(u-y-1+n)%n+1;
     // cout<<v<<' '<<v2<<'\n';
     s.insert(j);
     s.insert(v2);

    }
        }
        pl=s;
    }
    cout<<pl.size()<<'\n';
    for(ll p:pl){
        cout<<p<<' ';
    }
    cout<<'\n';
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