#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll x,y,m;cin>>x>>y;
        m=(x%100)*(y%100);
        cout<<m%100<<endl;;
        
    }
    return 0;
}