#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long int
int main(){
    int q;cin>>q;
    while(q--){
        ll n,k;cin>>n>>k;
        vector<ll>v(n,0);
        bool flag=true;
        if(k<n)flag=false;
        else{
            for(ll i=0;i<n;i++){
                if(i%2){
                    v[i]+=1;
                    k-=1;
                }else{
                    v[i]+=2;
                    k-=2;
                }
            }
            if(k<0)flag=false;
            //* 2x=n/k; rakhar jonno x er value evabe ber korsi 
            ll x=k/(2*n);
            // cout<<k<<"k";
            k=k%(2*n);
            ll i=0;
            while(k>0){
                if(k==1){
                    flag=false;
                    break;
                }
                v[i]+=2;
                k-=2;
                i++;i%=n;
            }
            for(ll i=0;i<n;i++){
                if(x<0)x=1;
                v[i]+=(2*x);
                if(v[i]>100000){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            for(ll val:v)cout<<val<<" ";
            cout<<endl;
        }else cout<<-1<<endl;
    }
    return 0;
}