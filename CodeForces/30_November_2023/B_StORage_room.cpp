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
    int n,s;cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cin>>a[i][j];
    }
    if(n==1){
        yes;
        cout<<1<<nl;
    }
    else{
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i==0)s=a[1][i];
            else s=a[0][i];
            for(int j=0;j<n;j++){
                if(i==j)continue;
                else{
                    s=(s&a[i][j]);
                }
            }
            v.push_back(s);
        }int k=1;
        bool ok=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i][j]!=(v[i]|v[j])){
                    ok=1;break;
                }
            }
        }
        if(ok)no;
        else{
            yes;
            for(int val:v)cout<<val<<" ";
            cout<<nl;
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