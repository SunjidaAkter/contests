#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n;cin>>n;
    string s;cin>>s;
    int sum=0;
    for(int i=0;i<n;i+=2){
        if(s[i]=='a'&&s[i+1]=='a'){
            sum++;
            s[i+1]='b';
        }
        if(s[i]=='b'&&s[i+1]=='b'){
            sum++;
            s[i+1]='a';
        }
    }
    cout<<sum<<endl<<s;
    return 0;
}