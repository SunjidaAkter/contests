#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        string s;cin>>s;
        if(s[0]=='a'||s[1]=='b'||s[2]=='c')cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}