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
    string s1,s2;
    int a[3],b[3];
    for(int i=0;i<3;i++){
        int x;cin>>x;
        a[i]=x;
    }
    sort(a,a+3);
    reverse(a,a+3);
    int sum=a[0];
    for(int i=1;i<3;i++){
        sum*=10;
        sum+=a[i];
    }
    for(int i=0;i<3;i++){
        int x;cin>>x;
        b[i]=x;
    }
    sort(b,b+3);
    reverse(b,b+3);
    int sum1=b[0];
    for(int i=1;i<3;i++){
        sum1*=10;
        sum1+=b[i];
    }
    if(sum>sum1)c("Alice");
    if(sum<sum1)c("Bob");
    if(sum==sum1)c("Tie");
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}