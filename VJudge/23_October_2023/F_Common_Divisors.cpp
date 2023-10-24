#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    vector<int>div;
    for(int i=1;i<=a[0];i++){
        if(a[0]%i==0)div.push_back(i);
    }
    return 0;
}