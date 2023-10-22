#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int m=s.size();
    if(k==0&&s.size()==1)yes;
    else if(k==1&&s.size()==2)yes;
    else if(n-k==1)yes;
    else{
        map<char,int>mp;
        int sum=0;
        for(int i=0;i<s.size();i++)mp[s[i]]++;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]%2==1){
                sum++;
                mp[s[i]]=0;
            }
        }
        if(sum==0||sum==1)yes;
        else if(sum==k||sum-k<=1)yes;
        else if(sum>k)no;
        else if(((abs(sum-k))%2==0))yes;
        // else if(sum<k){
        //     if((k-sum)==1&&n==sum)yes;
        //     if((k-sum)==1&&n>sum)no;
        //     else if((k-sum)%2==0)yes;
        //     else if((k-sum)%2==1)no;
        // }
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}