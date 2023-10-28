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
bool notPalin(string s){
    int i=0,j=s.size()-1;
    while(i<=j){
        if(s[i]==s[j])return false;
        i++;j--;
    }
    return true;
}
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(n%2)cout<<-1<<nl;
    else if(n==2&&s[0]!=s[1])cout<<0<<nl;
    else{
        if(notPalin(s))cout<<0<<nl;
        else{
            int cnt0=0,cnt1=0;
            for(int i=0;i<n;i++){
                if(s[i]=='0')cnt0++;
                if(s[i]=='1')cnt1++;
            }
            if(cnt0!=cnt1)cout<<-1<<nl;
            else{
                while(!notPalin(s)){
                    
                }
            }
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