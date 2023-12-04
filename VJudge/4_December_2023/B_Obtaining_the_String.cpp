#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    string s;cin>>s;
    string t;cin>>t;
    vector<int>v;
    for(int i=0;i<n;i++){
        int j=i;
        while(j<n&&s[j]!=t[i]){
            j++;
        }
        if(j==n){cout<<-1<<'\n';return 0;}
        else{
            for(int k=j-1;k>=i;k--){
                v.push_back(k+1);
                swap(s[k+1],s[k]);
            }
        }
    }
    cout<<v.size()<<'\n';
    for(int val:v)cout<<val<<" ";
    cout<<'\n';
    return 0;
}