#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;cin>>s;
        ll res=1;
        for(ll i=2;i<n;i+=2){
            ll cnt=0;
            if((ll)((s[i-2]-'0')^(s[i-1]-'0'))==(s[i]-'0'))cnt++;
            if((ll)((s[i-2]-'0')&(s[i-1]-'0'))==(s[i]-'0'))cnt++;
            if((ll)((s[i-2]-'0')|(s[i-1]-'0'))==(s[i]-'0'))cnt++;
            res*=cnt;res%=1000000007;
        }
        cout<<res<<endl;
    }
    return 0;
}