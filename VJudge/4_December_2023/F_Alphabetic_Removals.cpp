#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<pair<char,ll>>v;
    for(int i=0;i<n;i++){
        v.push_back({s[i],i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<k;i++){
        s[v[i].second]=' ';
    }
    for(int i=0;i<n;i++){
        if(s[i]==' ')continue;
        else cout<<s[i];
    }
    return 0;
}