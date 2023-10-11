#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    set<int>st;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(n==2)cout<<0;
    else cout<<min(v[n-1]-v[1],v[n-2]-v[0]);
    return 0;
}