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
    double a[n];
    set<int>st;
    for(int i=0;i<n;i++){cin>>a[i];st.insert(a[i]);}
    if(n==1||st.size()==1)cout<<0<<nl;
    else{
        int cnt=0;
        while(st.size()>1){
            st.clear();
            ll sum=0;
            for(int i=1;i<n;i++){
                sum+=(a[i-1]-a[i]);
            }
            ll avg=sum/(n-1);
            for(int i=1;i<n;i++){
                a[i]=floor((a[i]+avg)/2);
                cout<<a[i]<<' ';
                st.insert(a[i]);
            }
            cout<<nl;
            cnt++;
        }
        cout<<cnt<<nl;
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