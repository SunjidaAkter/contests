#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        forl(i,0,n)cin>>a[i];
        int even1=0,odd1=0;
        int even2=0,odd2=0;
        for(int i=0;i<n;i+=2){
            if(a[i]%2)odd1++;
            else even1++;
        }
        for(int i=1;i<n;i+=2){
            if(a[i]%2)odd2++;
            else even2++;
        }
        if(n%2){
            if(((n/2)+1==even1||(n/2)+1==odd1)&&((n/2)==even2||(n/2)==odd2))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            if(((n/2)==even1||(n/2)==odd1)&&((n/2)==even2||(n/2)==odd2))cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}