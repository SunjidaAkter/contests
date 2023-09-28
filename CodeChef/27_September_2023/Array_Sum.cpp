#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        ll n,k;cin>>n>>k;
        // cout<<n<<" "<<k<<endl;
        vector<ll>v;
        if(n<k){
            if(n==2&&k%2!=0){
                v.push_back(1);v.push_back(k-1);
                for(ll val:v)cout<<val<<" ";
                cout<<endl;
            }else if(n>2){
                if(((n/2)%2==0&&k%2==0)&&((n/2)%2==1&&k%2==1)){
                    for(int i=0;i<n-1;i++)v.push_back(i+1);
                    // int sum=((n*(n-1)/2)-k);
                    if((k-(n*(n-1)/2))<=0||(k-(n*(n-1)/2))<=n-1)cout<<-1<<endl;
                    else{
                        v.push_back((k-(n*(n-1)/2)));
                        for(int val:v)cout<<val<<" ";
                        cout<<endl;
                    }
                }else cout<< -1<<endl;
            }else cout<< -1<<endl;
        }else cout<< -1<<endl;
    }
    return 0;
}