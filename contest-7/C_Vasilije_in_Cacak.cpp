#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        ll n,k,x;cin>>n>>k>>x;
        if((k*(k+1)/2>x)||((2*n-k+1)*k/2<x))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}