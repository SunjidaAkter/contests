#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
typedef pair<char,char>pcc;
#define ll long long
int main(){
    int n;cin>>n;
    char x,y;cin>>x>>y;
    map<pcc,int>st;
    st[{x,y}]++;
    char aft=y;
    n=n-2;
    while(n--){
        cin>>x;
        st[{aft,x}]++;
        aft=x;
    }
    int mx=INT_MIN;
    char a,b;
    for(auto it=st.begin();it!=st.end();it++){
        if(mx<it->second){
            mx=it->second;
            a=it->first.first;
            b=it->first.second;
        }
    }
    cout<<a<<b;
    return 0;
}