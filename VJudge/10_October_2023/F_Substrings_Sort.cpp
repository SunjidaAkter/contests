#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    set<string>st;
    vector<string>v;
    while(n--){
        string s;cin>>s;
        st.insert(s);
    }
    while(!st.empty()){
        v.push_back(*st.begin());
        st.erase(st.begin());
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
    return 0;
}