#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll gcd=a[0];
    for(ll i=1;i<n;i++){
        gcd=__gcd(gcd,a[i]);
    }
    sort(a,a+n);
    vector<ll>div;
    for(ll i=1;i*i<=gcd;i++){
        if(gcd%i==0){
            if(gcd/i==i)sum++;
            else sum+=2;
        }
    }
    cout<<sum<<endl;
    return 0;
}