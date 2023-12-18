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
    string s;cin>>s;
    ll x=1,n=s.size();
    string s1="",s2="";
    s1+=s[0];bool k=0;
    // cout<<s1<<nl;
    if(n==1){
        cout<<-1<<nl;
        return;
    }
    for(int i=1;i<n-1;i++){
        if(s[i]=='0')s1+=s[i];
        else {
            x=i;k=1;break;
        }
    }
    if(k==1){
        for(int i=x;i<n;i++){
            s2+=s[i];
        }
    }else s2=s[n-1];
    if(s1==s2||(stoi(s2)==0)||stoi(s1)==0||(stoi(s1)>=stoi(s2)))cout<<-1<<nl;
    else cout<<s1<<" "<<s2<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}