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
    int n;cin>>n;
    int a[n],b[n];
    vector<int>ad,om;
    int cnt=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    // cout<<"h";
    for(int i=0;i<n;i++){
        if(a[i]==0){
            ad.push_back(cnt);
            cnt=0;
        }else cnt++;
    }
    ad.push_back(cnt);
    // for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cnt=0;
    for(int i=0;i<n;i++){
        if(b[i]==0){
            om.push_back(cnt);
            cnt=0;
        }else cnt++;
    }
    om.push_back(cnt);
    sort(ad.begin(),ad.end());
    sort(om.begin(),om.end());
    // for(int i=0;i<ad.size();i++)cout<<ad[i]<<" ";
    // cout<<nl;
    // for(int i=0;i<om.size();i++)cout<<om[i]<<" ";
    // cout<<nl;
    if(om[om.size()-1]>ad[ad.size()-1])cout<<"Addy"<<nl;
    if(om[om.size()-1]==ad[ad.size()-1])cout<<"Draw"<<nl;
    if(om[om.size()-1]<ad[ad.size()-1])cout<<"Om"<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}