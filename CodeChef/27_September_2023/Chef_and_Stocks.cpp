#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,sum=0;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        v.erase(v.begin());
        for(int i=0;i<n-1;i++)
        sum+=v[i];
        cout<<sum<<endl;
    }
    return 0;
}