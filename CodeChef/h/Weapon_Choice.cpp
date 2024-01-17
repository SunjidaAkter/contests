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
    ll h,x,y1,y2,k;cin>>h>>x>>y1>>y2>>k;
    ll first=y1*k;
    if(first>=h){
        ll c1,c2;
        if(h%y1==0)c1=(h/y1);
        else c1=(h/y1)+1;
        if(h%x==0)c2=h/x;
        else c2=(h/x)+1;
        cout<<min(c1,c2)<<nl;
        return;
    }
    ll f;
    if((h-first)%y2==0)f=(h-first)/y2;
    else f=((h-first)/y2)+1;
    ll s;
    if(h%x==0)s=h/x;
    else s=(h/x)+1;
    cout<<min(f+k,s)<<nl;
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