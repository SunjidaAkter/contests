#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(n==1)
    {
        if(k==1)cout<<a[0]<<'\n';
        else if(k==0 && a[0]>1)cout<<a[0]-1<<'\n';
        else cout<<-1<<'\n';
        return 0;
    }
    if(k==0)
    {
        if(a[0]==1)cout<<-1<<'\n';
        else cout<<a[0]-1<<'\n';
    }
    else if(n==k)cout<<a[n-1]<<'\n';
    else if(a[k-1]==a[k])cout<<-1<<'\n';
    else cout<<a[k-1]<<'\n';
    return 0;
}