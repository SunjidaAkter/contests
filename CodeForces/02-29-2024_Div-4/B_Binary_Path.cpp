#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n,j=0,k=1;cin>>n;
    string s1,s2;cin>>s1>>s2;
    ll p=n-1;
    for(ll i=0;i<n-1;i++){
        ll up=s1[i+1]-'0';
        ll dn=s2[i]-'0';
        if((up==1) && (dn==0)){
            p=i;
            break;
        }
    }
    string ans="";
    ll cnt=0;
    for(int i=0;i<=p;i++){
       ans+=s1[i];
    }
    for(int i=p;i<n;i++){
        ans+=s2[i];
    }
    for(int i=p;i>0;i--){
        int up=s1[i]-'0';
        int down=s2[i-1]-'0';
        if(up==down){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<ans<<nl<<cnt+1<<nl;
  
    
    // vector<ll>up,dn;
    // ll cnt=0;
    // up.push_back(s1.back()-'0');
    // for(ll i=n-2;i>=1;i--){
    //     if(s1[i]=='1')cnt++;
    //     up.push_back(cnt);
    // }
    // up.push_back(s1[0]-'0');
    // reverse(all(up));
    // cnt=0;
    // dn.push_back(s2.back()-'0');
    // for(ll i=n-2;i>=0;i--){
    //     if(s2[i]=='1')cnt++;
    //     dn.push_back(cnt);
    // }
    // reverse(all(dn));
    // cnt=0;
    // // for(ll val:up)cout<<val<<" ";
    // // cout<<nl;
    // for(ll val:dn)cout<<val<<" ";
    // cout<<nl;
    // vector<char>v;
    // v.push_back(s1[0]);
    // while(k<n&&j<n){
    //     if(up[k]<dn[j]){v.push_back(s1[k]);j++,k++;}
    //     else if(up[k]==dn[j]){v.push_back(s1[k]);j++,k++,cnt++;}
    //     else{
    //         v.push_back(s2[j]);
    //         j++;
    //         break;
    //     }
    // }
    // if(j==n){
    //     for(char val:v)cout<<val;
    //     cout<<s2.back();
    //     cout<<nl<<cnt+1<<nl;
    //     return;
    // }
    // while(j!=n){
    //     v.push_back(s2[j]);
    //     j++;
    // }
    // for(char val:v)cout<<val;
    // // cout<<s2.back();
    // cout<<nl<<cnt+1<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}