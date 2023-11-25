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
const ll N = 1e5 + 5;
vector<ll> tree(N * 4);
ll type;

void build(ll node, ll l, ll r, ll a[]) {
    if (l == r) {
        tree[node] = a[r];
        return;
    }
    ll leftNode = 2 * node;
    ll rightNode = leftNode + 1;
    ll mid = (l + r) / 2;
    build(leftNode, l, mid, a);
    build(rightNode, mid + 1, r, a);
    tree[node] = tree[leftNode] + tree[rightNode];
}

void update(ll node, ll l, ll r, ll idx, ll val) {
    if (idx<l || idx>r)return;
    if (l == r && idx == l) {
        tree[node] = val;
        return;
    }
    ll leftNode = 2 * node;
    ll rightNode = leftNode + 1;
    ll mid = (l + r) / 2;
    update(leftNode, l, mid, idx, val);
    update(rightNode, mid + 1, r, idx, val);
    tree[node] = tree[leftNode] + tree[rightNode];//merge
}

void solve(){
    ll n,q;cin>>n>>q;
    ll a[n+1];
    for(ll i=1;i<=n;i++)cin>>a[i];
    build(1,1,n,a);
    while(q--){
        ll type;cin>>type;
        bool ok=0;
        if(type==1){
            ll s;cin>>s;
            int i=0,j=0,sum=0,mx=0;
            while(j<n){
                sum+=tree[j];
                while(sum>s){
                    sum-=a[i];
                    i++;
                }
                if(sum==s){
                    ok=1;
                    break;
                }
                j++;
            }
            if(ok)yes;
            else no;
        }else if(type==2){
            ll idx,val;cin>>idx>>val;
            idx++;
            update(1,1,n,idx,val);
        }
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