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
    vector<int>e;
    vector<int>o;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]&1){odd++;o.push_back(a[i]);}
        else {even++;e.push_back(a[i]);}
    }
    if((even&1)||(odd&1))cout<<-1<<nl;
    else{
        vector<int>ans(n);
        sort(all(e));
        int i=0,j=e.size()-1,idx=0;
        while(i<j){
            ans[idx]=(e[i]+e[j])/2;
            ans[idx+(n/2)]=abs(e[j]-((e[i]+e[j])/2));
            i++,j--,idx++;
        }
        sort(all(o));
        i=0,j=o.size()-1;
        while(i<j){
            ans[idx]=(o[i]+o[j])/2;
            ans[idx+(n/2)]=abs(o[j]-((o[i]+o[j])/2));
            i++,j--,idx++;
        }
        // sort(all(ans));
        // reverse(all(ans));
        for(int val:ans)cout<<val<<" ";
        cout<<nl;
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