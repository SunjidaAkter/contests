#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    // bool f1=false,f2=false;
    int sum=0;
    // vector<int>arr;
    for(int i=1;i<n-1;i++){
        // if(v[i]==0)f1=true;
        // if(f1&&v[i]==1)sum++;
        if(v[i-1]==1&&v[i]==0&&v[i+1]==1){
            // f2=true;
            // f1=false;
            // if(sum!=1)arr.push_back(sum);
            sum++;i+=2;
        }
    }

    cout<<sum;
    return 0;
}