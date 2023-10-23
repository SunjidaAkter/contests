#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    vector<pii>v(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v[i]={x,i+1};
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll sum=1;
    for(int i=1;i<n;i++){
        // cout<<sum<<" ";
        sum+=((i)*v[i].first+1);
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)cout<<v[i].second<<" ";
    return 0;
}