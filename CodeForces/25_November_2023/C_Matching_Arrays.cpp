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
typedef pair<ll,ll>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,x,cnt=0;cin>>n>>x;
    vector<pii>a,b;
    for(int i=0;i<n;i++){
        int inp;cin>>inp;
        a.push_back({inp,i});
    }
    for(int i=0;i<n;i++){
        int inp;cin>>inp;
        b.push_back({inp,i});
    }
    sort(all(a));
    sort(all(b));
    reverse(all(b));
    for(int i=0;i<n;i++){
        if(a[i].first>b[i].first)cnt++;
    }
    if(cnt==x){
        yes;
        vector<ll>ans(n);
        for(int i=0;i<n;i++){
            ans[a[i].second]=b[i].first;
        }
        for(ll val:ans)cout<<val<<" ";
        cout<<nl;
    }else if(cnt<x){
        int i=0,j=n-1;
        while(i<j){
            if(cnt==x)break;
            if(a[i].first>b[j].first&&a[j].first>b[i].first&&a[i].first<=b[i].first){
                swap(b[i].first,b[j].first);
                i++,j--;
                cnt++;
            }else i++;
        }
        if(cnt==x){
            yes;
            vector<ll>ans(n);
            for(int i=0;i<n;i++){
                ans[a[i].second]=b[i].first;
            }
            for(ll val:ans)cout<<val<<" ";
            cout<<nl;
        }else no;    
    }else{
        int i=0,j=n-1;
        while(i<j){
            if(cnt==x)break;
            if(a[i].first<=b[j].first&&a[j].first<=b[i].first&&a[j].first>b[j].first){
                swap(b[i].first,b[j].first);
                i++,j--;
                cnt--;
            }else j--;
        }
        if(cnt==x){
            yes;
            vector<ll>ans(n);
            for(int i=0;i<n;i++){
                ans[a[i].second]=b[i].first;
            }
            for(ll val:ans)cout<<val<<" ";
            cout<<nl;
        }else no;    
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