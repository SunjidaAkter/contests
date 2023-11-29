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
    int cnt1=0,cnt2=0,x,y;cin>>x>>y;
    int a=x,b=y;
    while(x%y!=0&&x>1&&y>1){
        x++,y--;
        cnt1++;
    }
    while(a%b!=0&&a>1&&b>1){
        a--,b++;
        cnt2++;
    }
    if(a>=b)c(min(cnt1,cnt2));
    else c(cnt1);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}