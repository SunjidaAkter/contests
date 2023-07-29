#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int s1=0,s2=0,n;cin>>n;
        vector<int>v;
        set<int>s;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
        }
        s1=v.size();
        while(!v.empty()){
            s.insert(v.back());
            v.pop_back();
        }
        s2=s.size();
        cout<<abs(s1-s2)<<endl;
    }
    return 0;
}