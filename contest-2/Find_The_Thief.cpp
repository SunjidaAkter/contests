#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;cin>>test;
    while(test--){
        map<int, int> mp;
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            if(((it->second) % 2)==1){
                cout<<(it->first)<<endl;
            }
        } 
    }
    return 0;
}