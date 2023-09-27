#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,k;cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        auto it=find(a.begin(),a.end(),k);
        int sk=0;
        map<int,int>mp;
        if(it!=a.end()){
            for(int i=0;i<n;i++){
                mp[a[i]]++;
                if(k==a[i])sk++;
            }
            int mn=INT_MAX;
            for(auto it1=mp.begin();it1!=mp.end();it1++){
                mn=min(mn,it1->second);
            }
            if(sk<mn)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}