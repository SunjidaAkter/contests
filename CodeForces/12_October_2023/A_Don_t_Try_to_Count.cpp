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
    int sum=1,sum2=0;
    // string c1=s1,c2=s2;
    // sort(c1.begin(),c1.end());
    // sort(c2.begin(),c2.end());
    // cout<<c1<<" "<<c2<<"n";
    // bool flag=true;
    // for(int i=0;i<c1.size();i++){
    //     if(c1[i]!=c2[i]){
    //         flag=false;
    //         break;
    //     }
    // }
    if(isSubstring(s2,s1))cout<<0<<nl;
    else{
        // s1+=s1;
        // // cout<<s1<<" ";
        // if(s1.size()<=s2.size()){
            s1+=s1;
            sum++;
            for(int i=1;s1.size()<3*s2.size();i++){
                // cout<<"L"<<nl;
                if(isSubstring(s2,s1)){
                    break;
                }
                s1+=s1;
                sum++;
            }
            if(isSubstring(s2,s1))cout<<sum-1<<nl;
            else cout<<-1<<nl;
        // }else{
        //     if(isSubstring(s2,s1))cout<<sum<<nl;
        //     else cout<<-1<<nl;
        // }
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