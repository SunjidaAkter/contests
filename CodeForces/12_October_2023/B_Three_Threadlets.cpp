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
    vector<int>v(3);
    for(int i=0;i<3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int sum=3;
    while(sum--){
        if(v[1]>v[0]){
            v[1]-=v[0];
        }else if(v[1]==v[0]){
            if(v[2]>v[0])v[2]-=v[0];
            else break;    
        }else break;
    }
    if((v[0]==v[1])&&(v[1]==v[2]))yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}