// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define all(X) (X).begin(), (X).end()
// #define pub push_back
// #define pob pop_back
// #define nl  '\n'
// #define c(x) cout<<x<<nl
// #define yes cout<<"YES"<<nl
// #define no cout<<"NO"<<nl
// #define Yes cout<<"Yes"<<nl
// #define No cout<<"No"<<nl
// typedef pair<int,int>pii;
// #define forl(ty,var,str,end) for(ty var=str; var<end; var++)
// # define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
// void solve(){
//     int n,m;cin>>n>>m;
//     string s1,s2;cin>>s1>>s2;
//     int mn=INT_MAX,pos;
//     for(int i=0;i<(n-m+1);i++){
//         if(mn>((s2[0]-s1[i]))){
//             mn=(s2[0]-s1[i]);
//             pos=i;
//         }
//     }
//     // cout<<pos<<" ";
//     ll sum=0;
//     int j=0;
//     // cout<<s1[0]-'0'<<" ";
//     for(int i=pos;i<pos+m;i++){
//         if(s1[i]<=s2[i])sum+=min(abs((s1[i]-'0')-(s2[j]-'0')),abs((s1[i]-'0')+10-(s2[j]-'0')));
//         else sum+=min(abs((s1[i]-'0')-(s2[j]-'0')),abs((s1[i]-'0')-10-(s2[j]-'0')));
//         j++;
//     }
//     c(sum);
// }
// int main(){
//     FAST;
//     int t;cin>>t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }
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
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    int i=0,j=0,mn=INT_MAX;
    while(j<(n-m+1)){
        string s=s1.substr(j,m);
        int sum=0;
        for(int k=0;k<m;k++){
            if(s[k]<=s2[k])sum+=min(abs((s[k]-'0')-(s2[k]-'0')),abs((s[k]-'0')+10-(s2[k]-'0')));
            else sum+=min(abs((s[k]-'0')-(s2[k]-'0')),abs((s[k]-'0')-10-(s2[k]-'0')));    
        }
        mn=min(mn,sum);j++;
    }
    c(mn);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}