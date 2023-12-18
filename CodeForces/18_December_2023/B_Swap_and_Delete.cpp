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
//     string test;cin>>test;
//     string s=test;
//     ll n=s.size();
//     // cout<<s<<nl;
//     if(n==1){
//         cout<<1<<nl;
//         return;
//     }
//     vector<ll> z,o;
//     for(int i=0;i<n;i++){
//         if(s[i]=='0')z.push_back(i);
//         if(s[i]=='1')o.push_back(i);
//     }
//     if(z.size()==n||o.size()==n)cout<<n<<nl;
//     else if(z.size()==o.size())cout<<0<<nl;
//     else if(z.size()>o.size()){
//         ll j=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='0'){
//                 swap(s[i],s[o[j]]);
//                 j++;
//             }
//             if(j==o.size())break;
//         }
//         ll cnt=0,k=0;
//         for(int i=0;i<s.size();i++){
//             if(s[k]!=test[i]){
//                 cnt++;
//                 k++;
//             }else{
//                 s.erase(k,1);
//                 i--;
//             }
//         }
//         cout<<n-cnt<<nl;
//     }else if(z.size()<o.size()){
//         ll j=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='1'){
//                 swap(s[i],s[z[j]]);
//                 j++;
//             }
//             if(j==z.size())break;
//         }
//         ll cnt=0,k=0;
//         for(int i=0;i<s.size();i++){
//             if(s[k]!=test[i]){
//                 cnt++;
//                 k++;
//             }else{
//                 s.erase(k,1);
//                 i--;
//             }
//         }
//         cout<<n-cnt<<nl;
//     }
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
    string s;cin>>s;
    string a;
    ll z=0,o=0,n=s.size();
    for(ll i=0;i<n;i++){
        if(s[i]=='0')z++;
        if(s[i]=='1')o++;
    }
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            if(o>0){
                a.push_back('1');
                o--;
            }else{
                a.push_back('0');
                z--;
            }
        }else{
            if(z>0){
                a.push_back('0');
                z--;
            }else{
                a.push_back('1');
                o--;
            }
        }
    }
    ll l=0,r=0,ans=0;
    while(true){
        if(l>=n||r>=a.size())break;
        if(s[l]!=a[r])l++,r++;
        else ans++,r++;
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}