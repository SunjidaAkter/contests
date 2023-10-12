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
double distance(double ai,double aj,double bi,double bj){
    return (sqrt(((ai-bi)*(ai-bi))+((aj-bj)*(aj-bj))));
}
bool inside(double ai,double aj,double bi,double bj,double m){
    return distance(ai,aj,bi,bj)<=m;
}
void solve(){
    double pi,pj,ai,aj,bi,bj;
    cin>>pi>>pj>>ai>>aj>>bi>>bj;
    double l=0,r=1e5;
    double ans;
    while((r-l)>1e-11){
        double m=(l+r)/2;
        if(inside(ai,aj,pi,pj,m)&&inside(ai,aj,0,0,m)){
            ans=m;r=m;
        }else if(inside(bi,bj,pi,pj,m)&&inside(bi,bj,0,0,m)){
            ans=m;r=m;
        }else if(inside(bi,bj,pi,pj,m)&&inside(ai,aj,0,0,m)&&distance(ai,aj,bi,bj)<=2*m){
            ans=m;r=m;
        }else if(inside(ai,aj,pi,pj,m)&&inside(bi,bj,0,0,m)&&distance(ai,aj,bi,bj)<=2*m){
            ans=m;r=m;
        }else{
            l=m;
        }
    }   
    cout<<fixed<<setprecision(10)<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}