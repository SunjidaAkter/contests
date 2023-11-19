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
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int cnt=0,pos;
    for(int i=0;i<n;i++){
        if(s[i]=='B')cnt++;
    }
    if(cnt==k)cout<<0<<nl;
    else{
        if(cnt>k){
            int x=cnt-k;
            int cnt1=0;
            for(int i=0;i<n;i++){
                if(s[i]=='B')cnt1++;
                if(cnt1==x){pos=i+1;break;}
            }
            cout<<1<<nl<<pos<<" A"<<nl;
        }else if(cnt<k){
            int need=k-cnt;
            int i=0;
            while(need>0){
                if(s[i]=='B'){
                    i++;
                    continue;
                }
                else{
                    need--;
                    pos=i+1;
                    i++;
                }
            }
            cout<<1<<nl<<pos<<" B"<<nl;
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