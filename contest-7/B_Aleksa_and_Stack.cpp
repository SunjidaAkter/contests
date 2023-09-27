#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        vector<int>v(n);
        v[0]=1;v[1]=3;
        for(int i=2;i<n;i++){
            v[i]=v[i-1]+1;
            if((3*(v[i-1]+1))%(v[i-1]+v[i-2])==0)v[i]=v[i]+2;
            else if((3*(v[i-1]+1))%(v[i-1]+v[i-2])==0)v[i]=v[i]+3;
            else v[i]=v[i]+1;
        }
        for(int i=0;i<n;i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// weekly 20-25;