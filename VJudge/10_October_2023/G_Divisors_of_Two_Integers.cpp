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
        st.insert(x);
    }
    while(!st.empty()){
        v.push_back(*st.begin());
        st.erase(st.begin());
    }
    reverse(v.begin(),v.end());
    cout<<v[0]<<" ";
    for(int i=1;i<v.size();i++){
        if(v[0]%v[i]==0){
            v.erase(v.begin()+i);
            i--;
        }
    }
    if(v.size()==1||v[1]==1)cout<<v[0];
    else cout<<v[1];
    return 0;
}