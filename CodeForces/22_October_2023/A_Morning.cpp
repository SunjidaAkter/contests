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
    int sum=0;
    if(s[0]!='0')sum+=1+abs(1-(s[0]-'0'));
    else sum+=1+abs(1-(10));
    // cout<<sum<<"s";
    for(int i=1;i<4;i++){
        if(s[i-1]!='0'&&s[i]!='0')sum+=1+abs((s[i-1]-'0')-(s[i]-'0'));
        else {
            if(s[i-1]=='0'&&s[i]=='0'){sum+=1+abs(10-10);}
            else if(s[i]=='0')sum+=1+abs((s[i-1]-'0')-10);
            else if(s[i-1]=='0')sum+=1+abs(10-(s[i]-'0'));
        }
    }
    // sum+=1+abs((s[1]-'0')-(s[2]-'0'));
    // sum+=1+abs((s[2]-'0')-(s[3]-'0'));
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}