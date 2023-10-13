#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool isSubstring(string s1, string s2){
    return (s2.find(s1) != string::npos);
}
void solve(){
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int sum=1;
    if(isSubstring(s2,s1))cout<<0<<nl;
    else{
        s1+=s1;
        for(int i=1;s1.size()<3*s2.size();i++){
            if(isSubstring(s2,s1)){
                break;
            }
            s1+=s1;
            sum++;
        }
        if(isSubstring(s2,s1))cout<<sum<<nl;
        else cout<<-1<<nl;
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