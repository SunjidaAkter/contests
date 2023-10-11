#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;int k;cin>>n>>k;
    while(k--){
        if(n%10==0)n/=10;
        else n-=1;
    }
    cout<<n;
    return 0;
}