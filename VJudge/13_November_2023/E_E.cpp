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
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int s1=0,mx1=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0)s1++;
        if(a[i]==0){
            mx1=max(mx1,s1);
            s1=0;
        }
    }
    mx1=max(mx1,s1);
    int s2=0,mx2=0;
    for(int i=0;i<n;i++){
        if(b[i]!=0)s2++;
        if(b[i]==0){
            mx2=max(mx2,s2);
            s2=0;
        }
    }
    mx2=max(mx2,s2);
    if(mx1==mx2)c("Draw");
    if(mx1<mx2)c("Addy");
    if(mx1>mx2)c("Om");
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}