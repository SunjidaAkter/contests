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
    int n,mx=0;cin>>n;
    set<int>st;
    // vector<pii>v;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];st.insert(a[i]);mx=max(mx,a[i]);}
    if(st.size()==1)cout<<-1<<nl;
    else{
        int ans;
        for(int i=0;i<n;i++){
            if(a[i]!=mx)continue;
            else{
                if((i>0&&a[i-1]!=mx)||(i<n-1&&a[i+1]!=mx))ans=i+1;
            }
        }
        cout<<ans<<nl;
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