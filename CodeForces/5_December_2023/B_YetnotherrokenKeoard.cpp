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
    vector<pair<int,char>>up;
    vector<pair<int,char>>lo;
    for(int i=0;i<s.size();i++){
        if(s[i]!='b'&&islower(s[i])){
            lo.push_back({i,s[i]});
        }else if(s[i]!='B'&&isupper(s[i])){
            up.push_back({i,s[i]});
        }else if(!up.empty()&&s[i]=='B')up.pop_back();
        else if(!lo.empty()&&s[i]=='b')lo.pop_back();
    }
    vector<pair<int,char>>v;
    for(int i=0;i<up.size();i++){
        // cout<<up[i].second<<" ";
        v.push_back(up[i]);
    }
    for(int i=0;i<lo.size();i++){
        v.push_back(lo[i]);
    }
    sort(all(v));
    for(auto val:v)cout<<val.second;
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}