#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){

        int n;cin>>n;
        int diff,s;cin>>diff;
        int a[n],sum=0;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)sum+=a[i];
        if((diff+sum)%2==0){
            s=(diff+sum)/2;
            int dp[n+1][s+1];
            dp[0][0]=1;
            for(int i=1;i<=s;i++)dp[0][i]=0;
            for(int i=1;i<=n;i++){
                for(int j=0;j<=s;j++){
                    if(a[i-1]<=j){
                        dp[i][j]=dp[i-1][j-a[i-1]]+dp[i-1][j];
                        dp[i][j]=dp[i][j]%1000000007;
                    }else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            cout<<dp[n][s]<<endl;
        }else cout<<0<<endl;  
    }
    return 0;
}