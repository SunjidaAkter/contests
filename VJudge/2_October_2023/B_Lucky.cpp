#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int a[6];
        for(int i=0;i<6;i++)a[i]=s[i]-'0';
        // for(int i=0;i<6;i++)cout<<a[i]<<" ";
        int s1=0,s2=0;
        for(int i=0;i<3;i++)s1+=a[i];
        for(int i=3;i<6;i++)s2+=a[i];
        if(s1==s2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}