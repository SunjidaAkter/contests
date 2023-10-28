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
bool ist(string t){
    if(t.size()==1)return true;
    else{
        for(int i=1;i<t.size();i++){
            if((t[i-1]=='0'&&t[i]=='0')||(t[i-1]=='1'&&t[i]=='1'))return false;
        }
        return true;
    }
}
void solve(){
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    bool flag=true;
    if(s.size()==1)Yes;
    else{
        if(t[0]=='0'&&t[m-1]=='0'){
            for(int i=1;i<s.size();i++){
                if(s[i-1]=='0'&&s[i]=='0'){
                    flag=false;
                    break;
                }
                if(s[i-1]=='1'&&s[i]=='1'){
                    if(!ist(t)){
                        flag=false;
                        break;
                    }
                }
            }
        }else if(t[0]=='1'&&t[m-1]=='1'){
            for(int i=1;i<s.size();i++){
                if(s[i-1]=='1'&&s[i]=='1'){
                    flag=false;
                    break;
                }
                if(s[i-1]=='0'&&s[i]=='0'){
                    if(!ist(t)){
                        flag=false;
                        break;
                    }
                }
            }
        }else{
            for(int i=1;i<s.size();i++){
                if((s[i-1]=='1'&&s[i]=='1')||(s[i-1]=='0'&&s[i]=='0')){
                    flag=false;
                    break;
                }
            }
        }
        if(flag)Yes;
        else No;
    }
}
int main(){
    FAST;
    int q;cin>>q;
    while(q--){
        solve();
    }
    return 0;
}