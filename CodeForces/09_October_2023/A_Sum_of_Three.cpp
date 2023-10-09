#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pub push_back
#define pob pop_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
void solve(){
    ll n;cin>>n;
    if(n<=6||n==9)cout<<"NO"<<endl;
    else{
        if(n%3!=0)cout<<"YES"<<endl<<1<<" "<<2<<" "<<n-3<<endl;
        else cout<<"YES"<<endl<<1<<" "<<4<<" "<<n-5<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}