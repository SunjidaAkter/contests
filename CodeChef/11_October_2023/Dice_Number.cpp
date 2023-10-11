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
void solve(){
    vector<int>a(3);
    vector<int>b(3);
    // int a[3],b[3];
    for(int i=0;i<3;i++)cin>>a[i];
    for(int i=0;i<3;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // sort(b,b+3);
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    // for(int i=0;i<3;i++)cout<<a[i]<<" ";
    // for(int i=0;i<3;i++)cout<<b[i]<<" ";
    // reverse(b,b+3);
    bool tie=true,alice=false,bob=false;
    for(int i=0;i<3;i++){
        if(a[i]==b[i])continue;
        if(a[i]>b[i]){
            alice=true;
            tie=false;
            break;
        }else{
            bob=true;
            tie=false;
            break;
        }
    }
    if(tie)cout<<"Tie"<<nl;
    else if(alice)cout<<"Alice"<<nl;
    else if(bob)cout<<"Bob"<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}