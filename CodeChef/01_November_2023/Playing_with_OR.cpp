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
    int n,k;cin>>n>>k;
    int a[n],even=0,cnt=0;
    for(int i=0;i<n;i++)cin>>a[i];
    bool flag=false;
    for(int i=0;i<n;i++){
        // cout<<i<<" "<<"i ";
        if(a[i]%2==0)flag=true;
        else flag=false;
        if(flag)even++;
        else even=0;
        if(even==k){
            cnt++;
            i=i-k+1;
            // cout<<i<<" "<<k<<"j";
            even=0;
        }
    }
    c((n-k+1)-cnt);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}