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
    int a[n],even=0,odd=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]&1)odd++;
        else even++;
    }
    if((even&1)||(odd&1))cout<<-1<<nl;
    else{
        bool ok=0;
        vector<int>ans;
        for(int i=0;i<n;i+=2){
            if((a[i]%2==0&&a[i+1]%2==0)||(a[i]%2!=0&&a[i+1]%2!=0)){
                ans.push_back((a[i]+a[i+1])/2);
                ans.push_back(abs(a[i]-(a[i]+a[i+1])/2));
            }else ok=1;
        }
        if(ok)c(-1);
        else{
            sort(all(ans));
            reverse(all(ans));
            for(int val:ans)cout<<val<<" ";
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