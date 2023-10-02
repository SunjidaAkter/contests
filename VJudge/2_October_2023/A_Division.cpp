#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
#define ll long long
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        if(n<=1399)cout<<"Division 4"<<endl;
        else if(n<=1599&&n>=1400)cout<<"Division 3"<<endl;
        else if(n<=1899&&n>=1600)cout<<"Division 2"<<endl;
        else if(n>=1900)cout<<"Division 1"<<endl;

    }
    return 0;
}