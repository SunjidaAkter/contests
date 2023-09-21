#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int mn=INT_MAX,mni;
        for(int i=0;i<n;i++){
            if(a[i]<mn){
                mn=a[i];
                mni=i;
            }
        }
        a[mni]=a[mni]+1;
        int prod=1;
        for(int i=0;i<n;i++)prod*=a[i];
        cout<<prod<<endl;
    }
    return 0;
}