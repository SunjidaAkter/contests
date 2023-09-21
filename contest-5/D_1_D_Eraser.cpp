#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int sum=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                i=i+k-1;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}