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
    string s;cin>>s;
    bool A=true,B=false;
    int a=false,b=false;
    for(int i=0;i<n;i++){
        if(s[i]=='A'&&A){
            a++;
            A=true;
            B=false;
        }
        if(s[i]=='B'&&B){
            b++;
            A=false;
            B=true;
        }
        if(s[i]=='A'&&!A){
            // b++;
            A=true;
            B=false;
        }
        if(s[i]=='B'&&!B){
            // a++;
            A=false;
            B=true;
        }
    }
    cout<<a<<" "<<b<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}