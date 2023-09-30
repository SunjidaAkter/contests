#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int a,n;
        ll c;
        cin>>a>>c>>n;
        ll ar[n];
        for(int i=0;i<n;i++)cin>>ar[i];
        int s=0,j=0;
        while(c>0){
            if(c==1){
                for(int i=j;i<n;i++){
                    c+=ar[i];
                    if(c>=a){
                        c=a;
                        j=i+1;
                        break;
                    }
                }
            }
            s++;
            c--;
        }
        cout<<s+2<<endl;
    }
    return 0;
}