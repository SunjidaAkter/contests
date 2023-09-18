#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
#define ll long long
int main(){
    int q;cin>>q;
    while(q--){
        int n,k,x;
        cin>>n>>k>>x;
        if(n<k||(k-x)>1)cout<<-1<<endl;
        else {
            if(k==x){
                cout<<((k*(k-1))/2)+((k-1)*(n-k))<<endl;
            }else{
                int sum=(k*(k-1))/2;
                int mul=x*(n-k);
                cout<<sum+mul<<endl;
            }
        }
    }
    return 0;
}
//graph
//two pointers
//linked list traverse
//knapsack