#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    int N=1e5+1,mod=1e9+7;
    ll fact[N];fact[0]=1;fact[1]=1;
    for(ll i=2;i<=N;i++){
        fact[i]=(i*fact[i-1])%mod;
        fact[i]%=mod;
    }
    while(t--){
        int n,k;cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            if(a[i]%2)odd++;
            else even++;
        }
        if(n==1)cout<<1<<endl;
        else if(k==0&&(even==0||odd==0))cout<<fact[n]<<endl;
        else if(k==0||(k==1 && (even==0||odd==0)))cout<<0<<endl;
        else{
            if(abs(even-odd)>1)cout<<0<<endl;
            else{
                ll ans=(odd==even)?2:1;
                ans=(((ans*fact[even])%mod)*fact[odd])%mod;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}