#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
vector<int> divisors(int n){
    vector<int>v;
    for(int i=1;i<=n;i++){
        if(n%i==0)v.push_back(i);
    }
    return v;
}
int main(){
    int n;cin>>n;
    set<int>st;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        v.push_back(x);
    }
    // while(!st.empty()){
    //     v.push_back(*st.begin());
    //     st.erase(st.begin());
    // }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    cout<<v[0]<<" ";
    int x=v[0];
    // for(int val:v)cout<<val<<" ";
    for(int i=1;i<v.size();i++){
        if(v[0]!=v[i]&&v[0]%v[i]==0){
            v.erase(v.begin()+i);
            i--;
        }
    }
    v.erase(v.begin());
    if(v.size()==0)cout<<x;
    else cout<<v[0];
    return 0;
}